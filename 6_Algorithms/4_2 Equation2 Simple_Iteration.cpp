//ЛР7 Задание1
/*
3.Уравнение sin(2X)-X=0 решить 
1. Методом простых итераций. 
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
	
	double x0, x1, dx, eps=1e-2;
	int nIters=0;
	cout<<"Реализация метода простых итераций\n";
	//запрос на ввод
	cout<<"Введите x0\n";
	cin>>x0;
	
	if (abs(cos(2*x0))<1)
	{
		do {
			x1=sin(2*x0);
			dx=x1-x0;
			x0=x1;
			nIters++;
		} while (abs(dx)>eps);
	}
	else
	{
		do {
			x1=asin(x0)/2;
			dx=x1-x0;
			x0=x1;
			nIters++;
		} while (abs(dx)>eps);
	}
		
	//вывод
	cout<<"Один из корней: "<<x1<<endl;
	cout<<"получен за "<<nIters<<" итераций. \n";
	
	
	system("pause");
	return 0;
}