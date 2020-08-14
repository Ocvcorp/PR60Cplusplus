/*Семинар 4.
5. Создать функцию поиска наименьшего общего кратного двух чисел. 
Наименьшее общее кратное – это наименьшее натуральное число, которое делится на оба числа без остатка.

*/

#include <iostream>
using namespace std;
int MinCommonDivided(int,int,int);

int main()
{
	int n,m;
	cout<<"input two numbers \n";
	cin>> n>>m;
	cout<<"A minimum common devided number is "
	<< MinCommonDivided(n,m,n)<<endl;
	return 0;
}

int MinCommonDivided(int x, int y, int divXY)
{
	if (divXY%x==0&&divXY%y==0) return divXY;
	else return MinCommonDivided(x, y, ++divXY);
}

