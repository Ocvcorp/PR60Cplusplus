/*
ЛР9.
Задание 3. Создать рекурсивную функцию поиска в отсортированном массиве
по аналогии с итеративной функцией поиска из примера (Ex5.cpp) 
Л.Р. "Сортировка массивов".
*/
#include <iostream>
#include<time.h>
#define NArr 10


using namespace std;
int searchArrEl(int el, int arr[], int leftInd, int rightInd);
void sort5(int m[], int n);
void prnt(int m[], int n);
//int* arrayInit(int N);


int main()
{
	srand((int)time(0));
	int arr[NArr];
	for (int i = 0; i < NArr; i++) {
		arr[i] = (int)rand() % 11;
	}
	cout << "Random intialized mass: \n";
	prnt(arr, NArr);
	sort5(arr, NArr);
	cout << "Sorted mass: \n";
	prnt(arr, NArr);
	int X, indFound;
	cout << "Enter a number been looking for: ";
	cin>>X;
	indFound = searchArrEl(X, arr, 0, NArr - 1);
	cout << "The answear is: ";
		if (indFound >= 0)
		{
			cout <<indFound<<" is an index of our element"<<endl;
		} 
		else
		{
			cout << "no such an element in array : (\n";
		}
	cout << endl;
	system("pause");
	return 0;
}

int searchArrEl(int el, int arr[], int leftInd, int rightInd)
{
	
	int X, A, currInd, B;
	X = el;
	A = leftInd;
	B = rightInd;
	currInd = (A + B) / 2;

	
	if (arr[currInd] == X)
	{
		return currInd;
	}
	// Перенос границы
	if (arr[currInd] > X) B = currInd - 1;
	else A = currInd + 1;
	if (A > B)
	{
		//cout << \n";
		return -1;
	}

	return searchArrEl(X, arr, A, B);

}

void sort5(int m[], int n) {
	// Сортировка методом пузырька
	for (int i = 1; i < n; i++) {
		int a = m[i];
		for (int j = i; j >= 0; j--) {
			if (j == 0) { m[0] = a; break; }
			if (m[j - 1] > a) { m[j] = m[j - 1]; }
			else { m[j] = a; break; }
		}
	}
}

void prnt(int m[], int n) {
	// Функция распечатки массива
	for (int i = 0; i < n; i++)
		cout << m[i] << "\t";
	cout << endl;
}