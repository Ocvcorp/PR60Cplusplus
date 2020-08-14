//ЛР7 Задание1
/*
2.Уравнение 3x3-5x2+x+.4=0 решить 
1. Методом касательных (Ньютона).
ε =10-3 
корни -0,19; 0,51; 1,3
*/
#include <iostream>
#include <locale>
#include <math.h>
#define PRINT(X) cout<<#X<<"="<<X<<endl;
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	
	double x0, x1, dx , fX, dF, ddF, eps=1e-3;
	int nIters=0;
	cout<<"Реализация метода касательных(Ньютона)\n";
	//запрос на ввод
	cout<<"Введите начальный аргумент x0\n";
	cin>>x0;
	do {
		fX=3*pow(x0,3)-5*x0*x0+x0+.4;
		PRINT(fX)
		ddF=18*x0-10;
		PRINT(ddF)
			if (fX*ddF>0){
				dF=9*x0*x0-10*x0+1;
				x1=x0-fX/dF;
				dx=x0-x1;
				x0=x1;
			}
			else
			{
				cout<<"Условие сходимости нарушено\n";
				break;
			}
		nIters++;			
		}
		while (abs(dx)>eps);

		//вывод корня
		cout<<"Один из корней: "<<x0<<endl;
		cout<<"получен за "<<nIters<<" итераций. \n";
	
	
	system("pause");
	return 0;
}