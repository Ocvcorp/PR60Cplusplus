/*
6.	Создать структуру sport с полями: фамилия спортсмена, название страны, количество оценок спортсмена, 
массив значений оценок (не более пяти), средняя оценка. Значение поля средняя оценка вычислить при вводе данных. 
Упорядочить массив по убыванию средней оценки. Определить страну, чьи спортсмены имеют наибольшую сумму средних оценок.
*/
#include<iostream>
#define N 5
using namespace std;

struct sport
{
	char smSurname[10];
	char country[10];
	int nMarks;
	int marks[N];
	double avMark;
};
void structsOutput(sport* , int);
int main()
{
	int n=3;
	sport sportmens[N];
	//init
	double sum;
	for (int i=0; i<n; i++)
	{
		cout<<"Surname: ";
		cin>>sportmens[i].smSurname;
		cout<<"Country: ";
		cin>>sportmens[i].country;
		cout<<"Marks count: ";
		cin>>sportmens[i].nMarks;
		sum=0;
		cout<<"Marks: ";
		for (int j=0; j< sportmens[i].nMarks; j++)
		{
			cin>>sportmens[i].marks[j];
			sum+= sportmens[i].marks[j];
		}
		sportmens[i].avMark=sum/((double)(sportmens[i].nMarks));
	}
	//output
	cout << "initial array of structures:\n";
	structsOutput(sportmens, n);
	
	
	//sort
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <n- i; j++)
		{
			if (sportmens[j].avMark < sportmens[j + 1].avMark)
				swap(sportmens[j], sportmens[j + 1]);
		}
	}
	//output
	cout << "decrease sorted by average marks array of structures:\n";
	structsOutput(sportmens, n);
	cout << "the best country is " << sportmens[0].country << endl;
	
	system("pause");
	
	return 0;
}

void structsOutput(sport* sMas, int n)
{
	//output
	for (int i = 0; i < n; i++)
	{
		cout << (sMas[i].smSurname) << "/" << (sMas[i].country) << "/" << (sMas[i].avMark) << endl;
	}
}
