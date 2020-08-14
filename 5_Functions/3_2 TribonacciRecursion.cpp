/*Семинар 4.
3. Создать рекурсивную функцию получения n-го члена ряда Триббоначчи, 
в котором F(n)=F(n-1) + F(n-2) + F(n-3); F(1) = 0, F(2) = 0, F(3) = 1.

*/

#include <iostream>
using namespace std;
int tribonacci(int);

int main()
{
	int n;
	cout<<"input an index more then 3 \n";
	cin>> n;
	if (n>3) 
	{
		cout<<"The sum is "<<tribonacci(n)<<endl;
	}
	else {
		cout<<"wrong index\n";
	}

	return 0;
}

int tribonacci(int x)
{
	if (x==4) return 1;
	
	return tribonacci(x-3)+tribonacci(x-2)+tribonacci(x-1);
	
}