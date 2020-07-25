//ЛР3-2  Пример 3.
/*
для функции при 9 значениях аргумента
- вычислить точное значение приращений первообразной;
- вычсилить приближенные значения напрямую и на доп переменных
- вычислить абсолютные ошибки вычислений
результаты вывести в виде таблицы с заголовками и номерами строк (ошибки в экспоненциальном виде)
*/

#include <iostream>
#include "math.h"
#include <locale>
#define PRINT_TABLE(N,dX,DP,DP1,DP2,errDP) cout<<N<<"\t"<<dX<<"\t"<<DP<<"\t"<<DP1<<"\t"<<DP2<<"\t"; cout.setf(ios::scientific);cout<<errDP<<endl; cout.unsetf(ios::scientific);
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	double X, dX, 
	X1, p1, p2,
	DP,DP1,DP2,errDP;
	cout<<"Введите значение X"<<endl;
	cin >>X;
	if (X>1) {
		dX=0.5;
		cout << "Для значения X=" << X <<"Таблица приращений первообразной:"<<endl;
		cout<<"№"<<"\tdX\t"<<"\t\tDP"<<"\t\t\tDP1"<<"\t\t\tDP2"<<"\t\t\terr"<<endl;
		for (int i=1; i<=9; i++)
		{
			dX*=0.5;
			DP=log((X+dX-1)*(X+dX+1))/(X+dX-1)-log(X*X-1)/(X-1);
			X1=X+dX/2;
			p1=X1-1;
			p2=X1*X1-1;
			DP1=(2*X1*p1-p2*log(p2))/p2/p1/p1;
			DP1*=dX;
			DP2=(2*X1*(X1-1)-(X1*X1-1)*log(X1*X1-1))/(X1*X1-1)/(X1-1)/(X1-1);
			DP2*=dX;
			errDP=abs(DP-DP1);
			PRINT_TABLE(i,dX,DP,DP1,DP2,errDP)
			
			
		}
	} else
	{cout << "Неверный ввод"<<endl;}

	return 0;}