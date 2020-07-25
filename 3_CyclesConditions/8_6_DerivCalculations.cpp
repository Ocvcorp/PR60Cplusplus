//ЛР3-2  Пример 4.3
/*
цикл while
ввести X
вычислить dY точно с доп переменными и без них
для dX=5e-4...dX*2...0.016
вычислить DY, DY/DX
абсолют прогрешности вычислений
вывести в форме таблицы
*/

#include <iostream>
#include "math.h"
#include <locale>
#define PRINT_TABLE(N,dX,appDXDY,absErr)\
cout.setf(ios::left);cout.width(5);cout<<N;\
cout.setf(ios::left);cout.width(10);cout<<dX;\
cout.setf(ios::left);cout.width(10);cout<<appDXDY;\
cout.setf(ios::left);cout.width(15);cout<<absErr<<endl;

#define PRINT(X) cout<<#X<<"="<<X<<endl;

using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	double X, dX, dYS, dY, appDY, appDXDY, absErr,
	X0, p1, p2, p3;
	cout<<"Введите Х"<<endl;
	cin >>X;
	
	p1=2+sin(X)*sin(X);
	p2=log(p1);
	p3=2*sin(X)*sin(X)*cos(X);
	dYS=(cos(X)*p2-p3/p1)/p2/p2;
	
	dY=(cos(X)*log(2+sin(X)*sin(X))-2*sin(X)*sin(X)*cos(X)/(2+sin(X)*sin(X)))/log(2+sin(X)*sin(X))/log(2+sin(X)*sin(X));
	PRINT(X)
	PRINT(dY)
	
	int i=1;
		PRINT_TABLE("№","\t\tdX","appDXDY","AbsErr")
		
		dX=5e-4;
		while (dX<=0.016)
		{
			
			p1=sin(X+dX/2)/log(2+sin(X+dX/2)*sin(X+dX/2));
			p2=sin(X-dX/2)/log(2+sin(X-dX/2)*sin(X-dX/2));
			appDY=p1-p2;
			
			appDXDY=appDY/dX;
			absErr=abs(appDXDY-dY);
			
			PRINT_TABLE(i,dX,appDXDY, absErr)
			dX*=2;
			i++;
			
		}


	return 0;}