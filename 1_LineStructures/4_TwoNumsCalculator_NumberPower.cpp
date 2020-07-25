/*
Семинар 1-3
задача 3
-2 числа, не ноль. вывести сумму, произв, разность, частное
задача 4
-число. вывести квадрат, куб, 4ую степень

*/
#include <iostream>
#include <math.h>
#include <locale>
#define PRINT(X) cout<<#X<<"="<<X<<endl;
using namespace std;
int main()
{
	double A, B, C;
	setlocale(LC_ALL, "Russian");
	//сумма...частное
	cout << "введите ненулевые A и В"<<endl;
	cin>>A>>B;
	if (B){
	PRINT(A+B)
	PRINT(A-B)
	PRINT(A*B)
	PRINT(A/B)}
	else cout<<"неверный ввод"<<endl;
	
    //вычисление  C^2...4
    cout << "введите C"<<endl;
    cin>>C;
    PRINT(C*C)
    PRINT(pow(C,3))
    PRINT(pow(C,4))
	system("pause");
	return 0;
}