#include "time.h"
#include "math.h"
#include "stdlib.h"
#include <iostream>
using namespace std;
#define Nmax 20

int main1()
{
	int N;
	setlocale(0, "Rus");
	float X[Nmax], Y[Nmax], R;
	srand(time(0));
	cout << "Введите количество элементов массива Х:" << endl;
	cin >> N;
	for (int i = 0; i < N; i++) {
		X[i] = rand() % 20 - 10;
		cout << "X[" << i << "]=" << X[i] << endl;
	}
	cout << "Введите число R: " << endl;
	cin >> R;
	int j = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (abs(X[i]) <= R) {
			Y[j] = X[i];
			j++;
		}//Y[N-i-1]
	}

	for (int i = 0; i < Nmax; i++)
		cout << "Y[" << i << "]= " << Y[i] << endl;

	system("pause");
	return 0;
}