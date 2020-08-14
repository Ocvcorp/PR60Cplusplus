#include <iostream>
#include <time.h>

using namespace std;
void inputF(int** a, int n);
void outputF(int *a, int n);

int main()
{
	int n;
	int* a;
	cin >> n;
	cout << endl;
	inputF(&a,n);
	cout << endl;
	outputF(a, n);
	cout << endl;
	system("pause");
	return 0;
}

void inputF(int** a, int n)
{
	*a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> (*a)[i];
	}
}

void outputF(int *a, int n)
{
	for (int i=0;i<n;i++)
	cout << a[i] << "\t";
}