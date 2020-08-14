/*
4-2 
Создать функцию для записи в элементы одномерного массива их индексов (x[0] == 0, x[1] == 1 и т.д.).
*/

#include <iostream>

using namespace std;

void arrInd(int*, int);

int main()
{
	int N;
	cout << "Enter a number of array elements\n";
	cin >> N;
	int* someArr = new int[N];
    arrInd(someArr, N);
	for (int i=0; i<N; i++)
	{
		cout << someArr[i] << " ";
	}
	cout<<endl;
	system("pause");
	return 0;
	
}

void arrInd(int* arr, int N)
{
	for (int i=0; i<N; i++)
	{
		arr[i]=i;
		}
	}


