//ЛР4-1 Пример 0.
/*
Составить программу вычисления и сохранения в массиве Y значений функции y=sinx и 
в массиве X - соответствующих значений аргумента. 
Аргумент должен изменяться в градусах с шагом dX от начального значения X0
*/
#include <iostream>
#include "math.h"
#include <locale>

#define PRINT_TABLE(N,X,Y) cout<<N<<"\t"<<X<<"\t"<<Y<<endl;

using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	const int N=10;
	double X0, dX;
	double X[N], Y[N];
	cout << "Введите X0 и dX, град\n";
	cin>>X0>>dX;
	PRINT_TABLE("N","X","Y");
	for (int i=0;i<N;i++)
	{
		X[i]=X0+dX*i;
		Y[i]=sin(X[i]*M_PI/180);
		PRINT_TABLE(i,X[i],Y[i]);
	}
	
	system("pause");
	return 0;
}