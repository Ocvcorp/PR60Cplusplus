/* ЛР11-1. 
7.	Определить шаблон функции, определяющей максимальное из двух значений параметров. 
8.	Написать шаблон функции для вычисления суммы элементов массива 
и нахождения максимального элемента массива. Проверить работу этой функции для массива int и double.
9.	Написать шаблон функции для вычисления среднего значения 
элементов массива и проверить эту функцию для типа double
10.	Написать шаблон функции для вычисления произведения всех положительных элементов массива, 
проверить для типов int и double.

*/
#include <iostream>
#include <time.h>
#define N 25

using namespace std;

template <typename T>
T max2val(T x, T y);

template <class T>
void arrSumAndMaximum(T arr[], int n);

template <class T>
T arrMidVal(T arr[], int n);

template <class T>
T positivProduct(T* arr, int n);

template <class T>
void arrInit(T arr[], int n);

template <class T>
void arrOutput(T* arr, int n);

int main()
{
	//7
	double a = 6.7, b = 11.5;
	cout<<"7:\n" <<"maximum of " <<a <<" and "<<b<<" is " << max2val(a,b)<<endl<<endl;
	
	//8, 9, 10
	srand(time(0));
	int arrInt[N];
	double arrDbl[N];
	int n = 9;
	arrInit(arrInt,n);
	arrInit(arrDbl, n);
	cout << "Array of integers: \n";
	arrOutput(arrInt, n); 
	cout << endl;
	cout << "Array of doubles: \n";
	arrOutput(arrDbl, n); cout << endl;
	cout << endl;
	
	//8
	cout << "8:\nfor (integer) array: \n";
	arrSumAndMaximum(arrInt, n);
	cout << "for (double) array: \n";
	arrSumAndMaximum(arrDbl, n);
	cout<< endl;
		
	//9
	cout << "9:\nMidle value for (double) array is "<< arrMidVal(arrDbl, n);
	cout << endl << endl;

	//10
	cout << "10:\nProduct of positiv values are\n";
		cout<<"for (integer) array: " << positivProduct(arrInt, n)<<endl;
		cout << "for (double) array: " << positivProduct(arrDbl, n) << endl;
	cout << endl << endl;

	system("pause");
  return 0;
}

template <typename T>
T max2val(T x, T y)
{	
	return x > y ? x : y;
}

template <class T>
void arrInit(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (T)(rand() % 20-7.3);
	}
}

template <class T>
void arrOutput(T* arr, int n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

template <class T>
void arrSumAndMaximum(T arr[], int n)
{
	T max = arr[0], sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
		sum += arr[i];
	}
	cout << "Maximum element is " << max << " / Array sum is " << sum << endl;
}

template <class T>
T arrMidVal(T arr[], int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}

template <class T>
T positivProduct(T* arr, int n)
{
	T prod = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]>0) prod*=arr[i];
	}
	return prod;
}