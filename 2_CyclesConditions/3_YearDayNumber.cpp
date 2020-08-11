//ЛР2_2  Упражнение 4.
/*
4.	Написать программу, входными значениями которой являются номер дня с начала месяца, 
номер месяца и тип года (0 – невисокосный, 1 – високосный), а единственным выходным 
значением программы является номер дня с начала года.
*/
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int dayYearCount, iDay, iMounth, yearType, evenM, oddM;
	bool isFebMD, isEvenMD, isOddMD;
	cout <<"Введите\n1)Номер дня с начала месяца;\n2)Номер месяца;\n3)Тип года(0,1)\n"<< endl;
	cin >> iDay>>iMounth>> yearType;
	//вспомогательные логические выражения для обработки ввода (отсутствие дня в данном месяце) 
	isFebMD =(iMounth==2)&&(iDay>(28+yearType));
	isEvenMD =(iMounth==1||iMounth==3||iMounth==5||iMounth==7||iMounth==8||iMounth==10||iMounth==12)&&(iDay>31);
	isOddMD =(iMounth==2||iMounth==4||iMounth==6||iMounth==9||iMounth==11)&&(iDay>30);
	//обрабатываем ввод типа года и кол-ва месяцев
	if ( yearType<0||yearType>1||iMounth<=0||iMounth>12) 
	{cout<<"неверный ввод : тип года или номер месяца\n";} 
	//обрабатываем ввод кол-ва дней
	else if (iDay<1||isFebMD||isEvenMD||isOddMD)
	{cout<<"неверный ввод : кол-во дней\n";}
	else {
		if (iMounth==1) {dayYearCount=iDay;}
		else if (iMounth==2) {dayYearCount=iDay+31;}
		else {
		oddM=(iMounth-1)/2; //определяем кол-во нечетных месяцев
		if (iMounth>8) oddM++;
		evenM=iMounth-oddM-2; //определяем кол-во нечетных месяцев		
		dayYearCount=iDay+oddM*31+evenM*30+28+yearType;}
	}
	cout<<"Номер дня с начала года: "<<dayYearCount<< endl;
	system("pause");
	return 0;
}