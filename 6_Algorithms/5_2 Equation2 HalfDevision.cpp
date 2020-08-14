//ЛР7 Задание1
/*
2.Уравнение 3x3-5x2+x+.4=0 решить 
2. Методом половинного деления.
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
	
	double xR, fXR, fXdev2 ,xL, fXL, eps=1e-2;
	int nIters=0;
	cout<<"Реализация метода половинного деления\n";
	//запрос на ввод
	cout<<"Введите левую и правую границы интервала поиска корня\n";
	cin>>xR>>xL;
	
	
	do {

		fXR=3*pow(xR,3)-5*(xR)*(xR)+xR+.4;
		fXL=3*pow(xL,3)-5*(xL)*(xL)+xL+.4;		
		fXdev2=3*pow(xR/2+xL/2,3)-5*(xR/2+xL/2)*(xR/2+xL/2)+xR/2+xL/2+.4;
		if (fXdev2*fXL>0){
				xL=(xR+xL)/2;
				fXL=fXdev2;
			}
		else
			{
				xR=(xR+xL)/2;
				fXR=fXdev2;
			}
		nIters++;
		
		}
		while (abs(xR-xL)>eps);

		//вывод корня
		cout<<"Один из корней: "<<xR<<endl;
		cout<<"получен за "<<nIters<<" итераций. \n";
	
	
	system("pause");
	return 0;
}