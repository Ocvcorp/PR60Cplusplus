//ЛР7 Задание1
/*
1. Метод простых итераций. 
X=(X-0,1)4 +0,1
ε =10-3 
вводить x0 в окрестностях x1=0.1(один корень) и x2=1.1(второй корень)
*/
#include <iostream>
#include <locale>
#include <math.h>




using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	
	double x0, x1, dx, eps=1e-3;
	int nIters=0;
	cout<<"Реализация метода простых итераций\n";
	//запрос на ввод
	cout<<"Введите x0\n";
	cin>>x0;
	
	if (abs(4*pow(x0-0.1,3))<1)
	{
		do {
			x1=pow(x0-.1,4)+.1;
			dx=x1-x0;
			x0=x1;
			nIters++;
		} while (abs(dx)>eps);
	}
	else
	{
		do {
			x1=pow(x0-.1,0.25)+.1;
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