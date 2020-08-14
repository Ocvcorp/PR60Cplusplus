#include <iostream>
#include <time.h>
#define Nmax 25

using namespace std;

int main() {
	int A[Nmax], n, maxEl, jmax, minEl, jmin;
	srand(time(0));
	cout << "N elements?" << endl;
	cin >> n;
	cout << endl << "A[] before selection: ";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 11 - 3;
		cout << A[i] << " ";

	}
	
	//increase
	for (int i = 0; i < n-1 ; i++)
	{
		maxEl = A[0]; jmax = 0;
			for (int j = 0; j < n - i ; j++)
			{
				if (A[j] > maxEl) {
					maxEl = A[j];
					jmax = j;
				}
		}
		swap(A[jmax], A[n - i - 1]);
	}


	cout << endl << "A[] after selection: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	//decrease

	for (int i = 0; i < n - 1; i++)
	{
		minEl = A[0]; jmin = 0;
		for (int j = 0; j < n - i; j++)
		{
			if (A[j] < minEl) {
				minEl = A[j];
				jmin = j;
			}
		}
		swap(A[jmin], A[n - i - 1]);
	}


	cout << endl << "A[] after selection: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;



	system("pause");
	return 0;

}