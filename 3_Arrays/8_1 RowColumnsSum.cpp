//ЛР6 Занятие.
/*
Задать матрицу
Вывести после каждой строки сумму по данной строке; после каждого столбца - сумму по данному столбцу; общую сумму 
*/
#include <iostream>
#include <time.h>
#define nMax 5
#define mMax 6


using namespace std;
int main()
{
	int sumR, sumTotal ;
	int sumC[mMax];
	int M[nMax][mMax];
	srand(time(0));
	//инициализируем суммы начальными значениями
	sumR=0;
	sumTotal=0;
	for (int j=0; j<mMax; j++)
	{ 
		sumC[j]=0;
	}
	//вывод с расчетами
	cout<<"M: \n";
	for (int i=0;i<nMax;i++)
	{
		for (int j=0; j<mMax;j++){
		M[i][j]=rand()%11;
		cout<<M[i][j]<<"\t ";
		sumR+=M[i][j];
		sumC[j]+=M[i][j];
		}
		cout<<"sumR: "<<sumR<<endl;
		sumTotal+=sumR;
		sumR=0;
	}
	//вывод суммы по столбцам
	for (int j=0; j<mMax; j++)
	{ 
		cout<<"sumC:\t";
	}
	cout<<endl;	
	for (int j=0; j<mMax; j++)
	{ 
		cout<<sumC[j]<<"\t";
	}
	cout<<"\nTotal Sum: "<<sumTotal<<endl;
	
	
	
	system("pause");
	return 0;
}