#include <iostream>
#include <time.h>
# define Nmax 20
using namespace std;

int main()
{
	srand(time(0));
	int S[Nmax], D[Nmax], R[Nmax], n;
	cout << "enter n\n";
	cin >> n;
	cout << "S: ";
	for (int i = 0; i < n; i++) 
	{
	S[i] = rand() % 2;
	cout << S[i] << " ";
	}
	cout << endl;
	D[0] = S[0];
	cout <<"D: "<<D[0] << " ";
	for (int i = 1; i < n; i++)
	{
		if (S[i - 1] == S[i]) D[i] = 1;
		else D[i] = 0; 
			
		cout << D[i] << " ";

	}
	cout << endl;
	R[0] = D[0];
	cout << "R: " << R[0] << " ";
	for (int i = 1; i < n; i++)
	{
		if (D[i] == 1) R[i] = R[i - 1];
		else R[i] = 1 - R[i - 1];//!R[i - 1];
		cout << R[i] << " ";
	}
	
	cout << endl;
	system("pause");
	return 0;
}