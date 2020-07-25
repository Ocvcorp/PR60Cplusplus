#include <iostream>
#include <time.h>
# define Nmax 20
using namespace std;

int main()
{
	srand(time(0));
	int S[Nmax], n, A;
	cout << "enter n \n";
	cin >> n;
	cout << "Before \n S: ";
	for (int i = 0; i < n; i++) 
	{
	S[i] = rand()% 21;
	cout << S[i] << " ";
	}
	cout << endl;

	
	A = S[n - 1];
	for (int i = n-1; i >0 ; i--)
	{
		S[i] = S[i - 1];
	}

	S[0] = A;
	cout <<"After \n S: ";
	for (int i = 0; i <n; i++)
	{	
		cout << S[i] << " ";
	}
	cout  << endl;

	system("pause");
	return 0;
}