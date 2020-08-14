//ЛР7 Задание1
/*
3.Уравнение sin(2X)-X=0 решить 
2. Методом касательных.
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
	
	double x0, x, dx, dF, ddF, eps=1e-2;
	int nIters=0;
	cout<<"Реализация метода Ньютона\n";
	//запрос на ввод
	cout<<"Введите x0\n";
	cin>>x0;
	dF=2*cos(2*x0)-1;
	ddF=-4*sin(2*x0);
	if (dF*ddF>0){
		do {

			x=x0-(sin(2*x0)-x0)/(2*cos(x0)-1);
			dx=x-x0;
			x0=x;
			nIters++;
			
			}
			while (abs(dx)>eps);

	}
	else
	{
		cout<<"Неверно выбрано начальное значение \n";
	}
	
	cout<<"Результат: "<<x0<<endl;
	cout<<"Кол-во итераций: "<<nIters<<endl;
	
	system("pause");
	return 0;
}