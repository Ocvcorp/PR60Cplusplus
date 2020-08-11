//ЛР3-2  Пример 4.1
/*
цикл for
x=0.1-pi/3
вычислить sinX
приближ sinX с доп переменными и без них
абсолют и относит прогрешности вычислений
вывести в форме таблицы
*/

#include <iostream>
#include "math.h"
#include <locale>
#define PRINT_TABLE(N,X,sinX,appSxSmpl,appSx,absErr, relErr) cout<<N<<"\t"<<X<<"\t"<<sinX<<"\t"<<appSxSmpl<<"\t"<<appSx<<"\t"<<absErr<<"\t"<<relErr<<endl;
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	double sinX, appSxSmpl, appSx,absErr, relErr,
	X0, p1, p2,p3, p4;
	int i=1;
		PRINT_TABLE("№","X","sinX","AprxSM","Aprx","AbsErr", "RelErr")
		for (double X=.1; X<=M_PI/3; X+=0.05)
		{
			sinX=sin(X);
			
			p1=X*X*X/2/3;
			p2=p1*X*X/4/5;
			p3=p2*X*X/6/7;
			p4=p3*X*X/8/9;
			appSxSmpl=X-p1+p2-p3+p4;
			
			appSx=X-X*X*X/2/3+X*X*X*X*X/2/3/4/5-X*X*X*X*X*X*X/2/3/4/5/6/7+X*X*X*X*X*X*X*X*X/2/3/4/5/6/7/8/9;
						
			absErr=abs(sinX-appSx);
			relErr=absErr/sinX;
			
			PRINT_TABLE(i,X,sinX,appSxSmpl,appSx,absErr, relErr)
			i++;
			
		}


	return 0;}