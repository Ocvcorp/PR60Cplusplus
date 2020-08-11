//ЛР6 Задание2
/*
Задание 2. 
В квадратной матрице F(k,k), k≤9, определить, что больше: 
модуль минимального отрицательного элемента, стоящего над 
побочной диагональю, или максимальный положительный элемент, 
стоящий под побочной диагональю. 
*/
#include <iostream>
#include <time.h>
#include <locale>
#define mMax 5



using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	
	int F[mMax][mMax];
	int minNegative, iMin, jMin;
	int maxPositive, iMax, jMax;
	srand(time(0));

	//инициализируем матрицу
	cout<<"F: \n";
	for (int i=0;i<mMax;i++)
	{
		for (int j=0; j<mMax;j++){
		F[i][j]=rand()%16-3;
		cout<<F[i][j]<<"\t";
		}
		cout <<endl;
	}
	cout<<endl;
	minNegative=F[0][0];
	iMin=jMin=0;
	maxPositive=F[mMax-1][1];
	iMax=mMax-1; jMax=1;
	for (int i=0;i<mMax;i++)
	{
		for (int j=0; j<mMax;j++){
			//поиск мин отрицательного под побочной диагональю
			if ((i<mMax-1-j) && (F[i][j]<minNegative)){
				minNegative=F[i][j];
				iMin=i; jMin=j;
			}
			//поиск макс положительного над побочной диагональю
			if ((i>mMax-1-j) && (F[i][j]>maxPositive)){
				maxPositive=F[i][j];
				iMax=i; jMax=j;
			}
		}

	}
	//вывод матрицы с найденными элементами
	cout<<"F with Elements: \n";
	for (int i=0;i<mMax;i++)
	{
		for (int j=0; j<mMax;j++)
		{
			if ((i==iMin&&j==jMin)||(i==iMax&&j==jMax))
			{
				cout<<"<"<<F[i][j]<<">"<<"\t";
			}
			else
			{
				cout<<F[i][j]<<"\t";
			}
		}
		cout <<endl;
	}	
	cout<<endl;	
	//выводим ответ:
	cout <<"Модуль минимального отрицательного элемента, стоящего над побочной диагональю, ";
	(abs(minNegative)>maxPositive)?cout<<"больше ":cout<<"не больше ";
	cout <<"максимального положительного элемента, стоящего под побочной диагональю.\n";
	system("pause");
	return 0;
}