/*
4-2 �������
1. ��������� ������ �2 ������� ���������� �� ������� ������� ���������� 
(���������, ��������� ������� � �.�.), �������� ��������� ��� ����� �������� ��������.

*/

#include <iostream>

using namespace std;

int add(int a, int b) { return a+b; }
int sub(int a, int b) { return a - b;}
int prod(int a, int b) { return a * b;}
int intPart(int a, int b) { return( b ? (a / b) : INT_MAX); }
int modPart(int a, int b) { return(b ? (a % b) : INT_MAX); }

int main()
{
	int a, b;
	
	cout << "Enter a, b\n";
	cin >> a >> b;
	char oper;
	cout << "Enter an operation: + | - | * | / | % \n";
	cin >> oper;
	if (oper == '+' || oper == '-' || oper == '/' || oper == '%')
	{
		int(*calc)(int, int)=add;
		switch (oper)
		{
			case '+': calc = add; break;
			case '-': calc = sub; break;
			case '*': calc = prod; break;
			case '/': calc = intPart; break;
			case '%': calc = modPart; break;
		}
		cout << "The result is " << calc(a,b) << endl;
	}
	else
	{
		cout << "Incorrect input\n";
	}

	system("pause");
	return 0;
	
}


