
/*
��16
11. �������� ���������, ������� �������� �������, ������� ��������� �� ���� ����� ����������� �����, 
� �� ����� ����� ��������� ��������� ����� �����. (121=��� �������� ����).
*/
#include <fstream>
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void ThreeDigitDec2RusString(int);



int main()
{
	setlocale(LC_ALL, "Russian");
	int cons3Dig=0;
	int cond;
	do
	{
		cout << "������� �����������(!) ������������� ����� (��� ������������� ��� ������ �� ���������) \n";
		cin >> cons3Dig;
		cond = (int)(cons3Dig / 100);
		if ((cond > 0)&& (cond<10))
			ThreeDigitDec2RusString(cons3Dig);
		else if ((cond == 0||cond>=10)&& (cons3Dig>=0))
			cout << "�������� ����\n";

	} while (cons3Dig>=0);
	cout << "��������� ���������" << endl;
	system("pause");
	return 0;
}

void ThreeDigitDec2RusString(int input3Num)
{
	//number tables
	ifstream units, teens, decimals,  hundreds;
	units.open("lr16_11_units.txt");
	teens.open("lr16_11_teens.txt");
	decimals.open("lr16_11_decimals.txt");
	hundreds.open("lr16_11_hundreds.txt");
	
	//calculate digits
	int unDig, teenDig, decDig, hunDig;
	hunDig =(int)(input3Num / 100);
	decDig = (int)((input3Num - hunDig*100) / 10);
	unDig = input3Num % 10;
	

	//3digNumber russian interpretation output to Console
	string unitConsoleOutput="", teenConsoleOutput = "", decConsoleOutput="", hundConsoleOutput="",
			u,t,d,h;
	for (int i = 0; i < 9; i++)
	{
		units >> u;
		teens >> t;
			if (unDig == i + 1)
			{
				unitConsoleOutput = u;
				teenConsoleOutput = t;
			}
		decimals >> d;
			if (decDig == i + 1) 
				decConsoleOutput = d; 
		hundreds >> h;
			if (hunDig == i + 1)
				hundConsoleOutput = h;
	}
	units.close();
	teens.close();
	decimals.close();
	hundreds.close();

	//ConsoleOutout
	if (decDig>1)
		cout << input3Num << "=" << hundConsoleOutput
						<< " " << decConsoleOutput
						<< " " << unitConsoleOutput << endl;
	else if ((decDig==1) && (unDig!=0))
		cout << input3Num << "=" << hundConsoleOutput
		<< " " << teenConsoleOutput << endl;
	else if ((decDig == 1) && (unDig == 0))
		cout << input3Num << "=" << hundConsoleOutput
		<< " " << decConsoleOutput << endl;
	else
		cout << input3Num << "=" << hundConsoleOutput
						<< " " << unitConsoleOutput << endl;
}