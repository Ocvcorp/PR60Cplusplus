//ЛР4-1 Пример 4.
/*
4. На заданном отрезке, с заданным шагом изменения аргумента вычислить и поместить в массив F 30 значений функции e-x sin(6x), делённые на её последнее положительное значение. 
*/
#include <iostream>
#include <locale>
#include <math.h>
#define PRINT(X) cout<<#X<<"="<<X<<endl;
#define PRINT_TABLE(N,X,Y,Z) cout<<N<<"\t"<<X<<"\t"<<Y<<"\t"<<Z  <<endl;

using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	const int N=30;
    double A, B, F[N], lastP,
    dX, X, f[N];	
    cout<<"Задайте границы интервала\n";
    cin>>A>>B;
	// ищем lastP
	lastP=0;
	dX=(B-A)/(N-1);
	for (int i=0;i<N;i++)
	{
		X=A+dX*i;
		f[i]=exp(-X)*sin(6*X);
		if (f[i]>0) lastP=f[i];
	}
	// записываем F
	if (lastP) {
		PRINT(lastP)
		PRINT_TABLE("N", "X", "f","F")
	for (int i=0;i<N;i++)
		{
			F[i]=f[i]/lastP;
			PRINT_TABLE(i, A+dX*i, f[i],F[i])	
		}
	}
	else cout<<"в массиве нет положит. чисел";
	system("pause");
	return 0;
}