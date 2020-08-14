//ЛР7 Задание2
/*
1. Метод прямоугольников и трапеций 
F=1/X
на отрезке от a до b с шагом dx
первообразная ln|X|
*/
#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	
	double a, b, dx, xi, ZP,ZT,epsP,epsT,Zabs;
	int N;
	cout<<"Интегрирование 1/X методом простых прямоугольников с вычислением в середине интервала и трапеций\n";
	//запрос на ввод
	a=0.1; b=1; dx=.025;
	Zabs=log(b)-log(a);
	N=(int)((b-a)/dx);
	ZP=0;
	for (int i=1; i<=N; i++)
	{
		xi=a+dx/2+(i-1)*dx;
		ZP=ZP+1./xi;
	}
	ZP*=dx;
	epsP=abs(1-ZP/Zabs);
	
	ZT=(1./a+1./b)/2;
	for (int i=1; i<=N-1; i++)
	{
		xi=a+dx*i;
		ZT=ZT+1/xi;
	}
	ZT*=dx;
	epsT=abs(1-ZT/Zabs);
	
	//вывод
	cout<<"Абсолютное значение интеграла на интервале["<<a<<";"<<b<<"]: "<<Zabs<<endl;
	cout<<"Интегрирование методом ПУ с шагом "<<dx<<": "<<ZP<<" погрешность: "<<epsP<<endl;
	cout<<"Интегрирование методом трапеций с шагом "<<dx<<": "<<ZT<<" погрешность: "<<epsT<<endl;
	
	system("pause");
	return 0;
}