//ЛР4-2 Задание А 1.
/*
Вычислить среднее арифметическое элементов массива D(n), n≤25, без учета максимального и минимального элементов. 
Вывести массив, среднее, наибольший и наименьший элементы. 
*/
#include <iostream>
#include <locale>
#include <time.h>
#define nMax 25
#define PRINT(X) cout<<#X<<"="<<X<<endl;

using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int n, minD, maxD,sCount;
	float avM, sum;
	srand(time(0));
	cout<<"введите кол-во эл-ов массива, не более "<<nMax << "и не менее 2х" <<endl;
	cin >>n;
	if (n<=nMax&&n>2){
	float	D[nMax];
	cout<<"D: ";
	for (int i=0;i<n;i++)
	{
		D[i]=float(rand()%11-5);
		cout<<D[i]<<" ";
	}
	cout<<endl;
	//min max
	minD=maxD=D[0];
	for (int i=1;i<n;i++)
	{
		if(D[i]>maxD){maxD=D[i];}	
		if(D[i]<minD){minD=D[i];}
	}
	//avM
	sum=0;
	sCount=0;
	for(int i=0;i<n;i++){
		if (!(D[i]==minD||D[i]==maxD))
		{sum+=D[i];
		sCount++;
		}
	}
	if (sCount)
	{avM=sum/sCount;
	cout<<"Среднее: ";
	PRINT(avM)}
	else {cout<<"в массиве только максимальные и минимальные элементы \n";}
	PRINT(maxD)
	PRINT(minD)
	}
	else
	{cout<<"неверный ввод"<<endl;}
	
	system("pause");
	return 0;
}