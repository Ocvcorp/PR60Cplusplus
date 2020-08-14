/*
4-2 
4. Создать функцию для сдвига элементов массива таким образом, 
чтобы в x[0] оказалось значение x[1], в x[1] – значение x[2], … , в x[N-1] значение x[0].

*/

#include <iostream>

using namespace std;
void arrInd(int*, int);
void arrShift(int*, int);
void arrPrint(int*, int);

int main()
{
	int N;
	cout << "Enter a number of array elements\n";
	cin >> N;
	int* someArr = new int[N];
    
	arrInd(someArr, N);
	cout<<"Initial array: \n";
	arrPrint(someArr, N);
	arrShift(someArr, N);
	cout<<"Shifted array: \n";
	arrPrint(someArr, N);
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

void arrPrint(int* arr, int N)
{
	for (int i=0; i<N; i++)
	{
		cout << arr[i] << " ";
	}
	cout<<endl;
}

void arrShift(int* arr, int N)
{
	int lastEl=arr[0];
	
	for (int i=0; i<N-1; i++)
	{
		arr[i]=arr[i+1];
	}
	arr[N-1]=lastEl;
}