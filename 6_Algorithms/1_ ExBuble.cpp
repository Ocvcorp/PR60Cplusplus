#include <iostream>
#include <time.h>
#define Nmax 25

using namespace std;

int main() {
	int A[Nmax], n;
	srand(time(0));
	cout << "N elements?" << endl;
	cin >> n;
	cout << endl <<"A[] before bubble: ";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 26 - 3;
		cout << A[i] << "\t";

	}
	for (int i = 0; i < n - 1; i++) {
		for (int j=0; j< n -i-1;j++)
			if (A[j] > A[j + 1]) { swap(A[j], A[j + 1]); }
	}
	cout << endl << "A[] after bubble: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++)
			if (A[j] < A[j + 1]) { swap(A[j], A[j + 1]); }
	}
	cout << endl << "A[] after bubble: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
	
}