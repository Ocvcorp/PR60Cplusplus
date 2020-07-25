//ЛР3-2  Пример 4.2
/*
цикл while
x=0...pi/4
вычислить cosX
приближ cosX с доп переменными и без них
абсолют и относит прогрешности вычислений
вывести в форме таблицы
*/

#include <iostream>
#include "math.h"
#include <locale>
#define PRINT_TABLE(N,X,cosX,appCxSmpl,appCx,absErr, relErr)\
cout.setf(ios::left);cout.width(5);cout<<N;\
cout.setf(ios::left);cout.width(5);cout<<X;\
cout.setf(ios::left);cout.width(10);cout<<cosX;\
cout.setf(ios::left);cout.width(10);cout<<appCxSmpl;\
cout.setf(ios::left);cout.width(10);cout<<appCx;\
cout.setf(ios::left);cout.width(15);cout<<absErr;\
cout.setf(ios::left);cout.width(15);cout<<relErr<<endl;\

using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	double X, cosX, appCxSmpl, appCx,absErr, relErr,
	X0, p1, p2,p3, p4;
	int i=1;
		PRINT_TABLE("№","\t\tX","cosX","tAprxCM","AprxC","AbsErr", "RelErr")
		
		X=0;
		while (X<=M_PI/4 )
		{
			cosX=cos(X);
			
			p1=X*X/2;
			p2=p1*X*X/3/4;
			p3=p2*X*X/5/6;
			p4=p3*X*X/7/8;
			appCxSmpl=1-p1+p2-p3+p4;
			
			appCx=1-X*X/2+X*X*X*X/2/3/4-X*X*X*X*X*X/2/3/4/5/6+X*X*X*X*X*X*X*X/2/3/4/5/6/7/8;
						
			absErr=abs(cosX-appCx);
			relErr=absErr/cosX;
			
			PRINT_TABLE(i,X,cosX,appCxSmpl,appCx,absErr, relErr)
			X+=0.1;
			i++;
			
		}


	return 0;}