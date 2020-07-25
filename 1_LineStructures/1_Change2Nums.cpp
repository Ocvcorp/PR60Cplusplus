/*
Семинар 1-3
задача 0
поменять местами 2 переменных

*/
#include <iostream>
#include <locale>
#define PRINT(X) cout<<#X<<"="<<X<<endl;
using namespace std;
int main()
{
	double A, B;
	setlocale(LC_ALL, "Russian");
	cout << "Замена местами переменных A и B без третьей переменной с помощью умножения и деления\n Введите A и B :";
	cin >> A >> B;
	cout << "до замены\n";
	PRINT(A)
	PRINT(B)
	A=A*B;
	B=A/B;
	A=A/B;
	cout << "после замены\n";
	PRINT(A)
	PRINT(B)
	system("pause");
	return 0;
}