/*Семинар 4.
4. Создать рекурсивную и нерекурсивную функции, 
которая возвращает true, если число простое, и false иначе.
*/

#include <iostream>
using namespace std;
bool isPrimeRecurM(int,int);
bool isPrimeIterM(int);

int main()
{
	int n;
	cout<<"input a number\n";
	cin>> n;
	if (n>1) {
	cout<<"A recursion method answear:\n";
	isPrimeRecurM(n,n)?cout<<"-it's a prime number":cout<<"-it's a composite number";
	cout<<endl;
	cout<<"An iteration method answear:\n";
	isPrimeIterM(n)?cout<<"-it's a prime number":cout<<"-it's a composite number";
	cout<<endl;
	}
	else
	{cout <<"wrong input\n";}
	return 0;
}

bool isPrimeRecurM(int x, int currX)
{
	currX--;
	if (currX==1) return true;
		else if	(x%currX==0) return false;
			else return isPrimeRecurM(x,currX);
}

bool isPrimeIterM(int x)
{
	int i=x-1;
	while (i>1)
	{
		if (x%i==0) return false;	
		i--;
	}
	return true;
}