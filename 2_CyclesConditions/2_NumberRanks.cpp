//ЛР2_2  Упражнение 3.
/*
3.	Написать программу, которая во входном числе находит единицы, десятки, сотни и тысячи 
и выводит найденные значения на экран, а также выводит на экран количество 
десятичных разрядов в числе. Если в каком-либо из разрядов числа находится 0, 
то выводить соответствующее сообщение не нужно. Если в качестве числа введён ноль, 
то вывести сообщение «Введён ноль». Входным числом может являться любое неотрицательное 
однозначное, двузначное, трёхзначное, четырёхзначное число. 
*/
#include <iostream>
#include "math.h"
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int inptNum, d0, d1, d1Mod, d2,d2Mod, d3, d3Mod;
	cout <<"Введите неотрицательное целое число до 4х разрядов"<< endl;
	cin >> inptNum;
	d3=inptNum/1000; d3Mod=inptNum%1000;
	d2=d3Mod/100; d2Mod=d3Mod%100;
	d1=d2Mod/10;
	d0=d2Mod%10;
if (inptNum<0) cout<<"неверный ввод: отрицательное число"<<endl;
	else if (d3>=10) cout<<"неверный ввод: число с разрядом выше 4ого"<<endl;
		else if (inptNum==0) cout << "введён ноль"<<endl;
			else{ 
				if (d0!=0) cout <<"Единицы = "<<d0<<endl;
				if (d1!=0) cout <<"Десятки = "<<d1<<endl;
				if (d2!=0) cout <<"Сотни = "<<d2<<endl;
				if (d3!=0) cout <<"Тысячи = "<<d3<<"\nКоличество разрядов = 4\n";
					else if (d2!=0) cout <<"Количество разрядов = 3\n";
						else if (d1!=0) cout <<"Количество разрядов = 2\n";
							else cout <<"Количество разрядов = 1\n";
			}
		
	
	system("pause");
	return 0;
}