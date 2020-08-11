//ЛР4-2 Задание Б 2.
/*
Произвольные значения аргумента функции Y=2X4-12X3-4X2+2 находятся в массиве X(n), n≤20. Составить программу вычисления максимального и минимального значений функции, а также соответствующих значений элементов массива Х и их индексов. 
*/
#include <iostream>
#include <math.h>
#include <locale>
#include <time.h>

#define nMax 20



using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int n, mn_i, mx_i;
	float maxX, minX, xr;
	srand(time(0));
	cout<<"введите кол-во эл-ов массива, не более "<<nMax <<endl;
	cin >>n;
	if (n<=nMax&&n>0){
	float	X[nMax];
	cout<<"X: ";
	for (int i=0;i<n;i++)
	{
		xr=float(rand()%11-5);
		X[i]=2*pow(xr,4)-12*pow(xr,3)-4*xr*xr+2;
		cout<<X[i]<<" ";
	}
	cout<<endl;
	//min max
	minX=maxX=X[0];
	for (int i=0;i<n;i++)
	{
		if(X[i]>=maxX){maxX=X[i];mx_i=i;}	
		if(X[i]<=minX){minX=X[i];mn_i=i;}
	}
	cout<<"Минимальное X[]: "<<minX<<" индекс: "<<mn_i<<endl;
	cout<<"Максимальное X[]: "<<maxX<<" индекс: "<<mx_i<<endl;
	}
	else
	{cout<<"неверный ввод"<<endl;}
	
	system("pause");
}