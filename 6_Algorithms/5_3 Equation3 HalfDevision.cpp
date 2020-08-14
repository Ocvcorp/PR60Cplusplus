//ЛР7 Задание1
/*
3.Уравнение sin(2X)-X=0 решить 
2. Методом половинного деления.
ε =10-2 
корни -0.95; 0; 0.95
*/
#include <iostream>
#include <locale>
#include <math.h>

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

		fXR=sin(2*xR)-xR;
		fXL=sin(2*xL)-xL;;		
		fXdev2=sin(2*(xR/2+xL/2))-(xR/2+xL/2);
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