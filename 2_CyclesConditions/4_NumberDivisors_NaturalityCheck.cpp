//ЛР3_1  Упражнение 1.
/*
1.	Дано целое число, не меньшее двух. Вывести: 1) его наименьший натуральный делитель, отличный от 1; 2) список всех натуральных делителей данного числа;
3) «простое», если число является таковым и «не является простым» иначе.
*/
#include <iostream>
#include "math.h"
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int iNum, minDiv;
	char numType;
	bool isDFound;
	isDFound=false;
	cout <<"Введите целое число не меньше 2"<< endl;
	cin >> iNum;

	if ( iNum>=2) {
			cout<<"Список натуральных делителей:\n";
		for (int i=2; i<=iNum;i++)
		{
			if (iNum%i==0) {
				if(!isDFound){
					minDiv=i; 
					isDFound=true;
					}
				cout<<i<<"\t";
				}
			}
		cout<<"\nНаименьший делитель: "<<minDiv<<endl;
		if (minDiv==iNum) cout<<"Число простое"<<endl;
		else cout<<"Число  непростое"<<endl;
	}
		else
		cout<<"Неверный ввод\n";
	
	system("pause");
	return 0;
}