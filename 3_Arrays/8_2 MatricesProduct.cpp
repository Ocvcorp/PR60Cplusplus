//ЛР6 Задание1
/*
Задание 1. Задать 2 матрицы
Осуществить перемножение двух матриц.
*/
#include <iostream>
#include <time.h>



using namespace std;
int main()
{
	int const nMax=3;
	int const sMax=2;
	int const mMax=3;
	int A[nMax][sMax];//1ый член произведения
	int B[sMax][mMax];//2ой член произведения
	int C[nMax][mMax];//произведение
	int sum=0;
	srand(time(0));

	//инициализируем матрицы
	cout<<"A: \n";
	for (int i=0;i<nMax;i++)
	{
		for (int j=0; j<sMax;j++){
		A[i][j]=rand()%11;
		cout<<A[i][j]<<"\t ";
		}
		cout <<endl;
	}
	cout<<"\nB: \n";
	for (int i=0;i<sMax;i++)
	{
		for (int j=0; j<mMax;j++){
		B[i][j]=rand()%11;
		cout<<B[i][j]<<"\t ";
		}
		cout <<endl;
	}
	//вывод суммы по столбцам
	cout<<"\nC=AxB: \n";
	for (int i=0;i<nMax;i++)
	{
		for (int j=0; j<mMax;j++)
		{
			for (int k=0; k<sMax; k++)
			{
				sum+=A[i][k]*B[k][j];
			}
			C[i][j]=sum;
			sum=0;
			cout<<C[i][j]<<"\t ";
		
		}
		cout <<endl;
	}
	
	cout<<endl;

	system("pause");
	return 0;
}