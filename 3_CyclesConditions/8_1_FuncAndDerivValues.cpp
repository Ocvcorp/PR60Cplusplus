//ЛР3-2  Пример 2.
/*
- вычислить значение функции и производной на интервале с шагом, используч упрощения;
- проверить на полном выражении и методом конеч разностей
- заменить заданный интервал с шагом на вводимые
- результаты выводить в виде таблицы

*/
#include <iostream>
#include "math.h"
#include <locale>
#define PRINT_TABLE(dX,Y,dYs,dY,dYed) cout<<dX<<"\t"<<Y<<"\t"<<dYs<<"\t"<<dY<<"\t"<<dYed<<endl;
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	
	double A, B, H, 
	X, Xr, p1, p2, p3,
	Y,  dYs, 
	dY, dYed,Y1, Y2,X1,X2;
	const double dX=1e-8;
	cout << "Обозначьте границы интервала A, B и шаг вычислений H\n";
	cin>>A>>B>>H;
	if (A<=B){
		PRINT_TABLE("arg","fun","dFun","dFchk1","dFchk2")
		X=A;
		while(B>=X){
			//подготовка/упрощение
			Xr= X*M_PI/180;
			p1=exp(-Xr*Xr)/Xr;
			p2=sin(10* Xr);
			p3=cos(10* Xr);
			//вычисление
			Y=p1*p2;
			dYs=10*p1*p3-Y*(2*Xr+1/Xr);
			//проверка
			dY=(Xr*( exp(-Xr*Xr)*10*cos(10*Xr) -  2*Xr* exp(-Xr*Xr)*sin(10*Xr)  )-exp(-Xr*Xr)*sin(10*Xr))/Xr/Xr;
			X1=Xr+dX/2;
			X2= Xr-dX/2;
			Y1=exp(-(X1)*(X1))*sin(10*X1)/X1;
			Y2=exp(-(X2)*(X2))*sin(10*X2)/X2;
			dYed=(Y1-Y2)/dX;
			//вывод таблицы
			PRINT_TABLE(X,Y,dYs,dY,dYed)
			X+=H;
			}
		}
		else
		cout<<"\"A\"должно быть не больше \"B\""<<endl;
	system("pause");
	return 0;
}