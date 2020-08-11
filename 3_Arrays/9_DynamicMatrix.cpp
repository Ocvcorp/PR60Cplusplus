#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int** matr;
	int m = 3, n = 2;
	cout << endl;
	matr = new int*[m];
	for (int i = 0; i < m; i++)
	{
		matr[i] = new int [n];
		for (int j = 0; j < n; j++)
		{
			matr[i][j] = rand() % 11;
			cout<< matr[i][j] <<"\t";
		}
		cout << endl;
	}
	cout << "delete starts\n";

	for (int i = 0; i < m; i++) {
		delete[] matr[i];
	}
	delete matr;

	cout << "delete completed\n";
	cout << matr;
	system("pause");
	return 0;
}