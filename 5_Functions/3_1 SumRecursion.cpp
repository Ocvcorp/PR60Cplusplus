/*Семинар 4.
2. Создать рекурсивную функцию получения суммы всех чисел от 1 до n, n – параметр функции.
*/

#include <iostream>
using namespace std;
int sumN(int);

int main()
{
	int n;
	cout<<"input a number of int values\n";
	cin>> n;
	cout<<"The sum is "<<sumN(n)<<endl;

	return 0;
}

int sumN(int x)
{
	if (x==1) return 1;
	
	return x+sumN(x-1);
	
}