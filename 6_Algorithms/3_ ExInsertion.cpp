#include <iostream>
#include <time.h>
#define Nmax 25

using namespace std;

int main() {
	int A[Nmax], n;
	srand(time(0));
	cout << "N elements?" << endl;
	cin >> n;
	cout << endl << "A[] before insertion: ";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 11 - 3;
		cout << A[i] << " ";

	}
	
	for (int i = 0; i < n ; i++) {
		for (int j = i; j >0; j--)
			if (A[j] < A[j - 1]) { swap(A[j], A[j - 1]); }
			else break;
	}
	cout << endl << "A[] after insertion: ";
	
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = i; j > 0; j--)
			if (A[j] > A[j - 1]) { swap(A[j], A[j - 1]); }
			else break;
	}
	cout << endl << "A[] after insertion: ";

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;

}