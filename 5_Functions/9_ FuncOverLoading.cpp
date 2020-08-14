#include <iostream>
using namespace std;

int globalNum1=2;
int globalNum2=3;
//прототипы
int minFromTwoNumbers(int,int);
void minFromTwoNumbers();
void minFromTwoNumbers(int*,int*);
int main()
{
	int a,b;
	int* pA, *pB;
	cout<<"input 2 numbers\n";
	cin >>a>>b;	
	cout<<"With returned value: "<<minFromTwoNumbers(a,b)<<endl;
	cout<<"With global values: "; 
	minFromTwoNumbers();
	cout <<endl;
	pA=&a, pB=&b;
	cout<<"With pointers: "; 
	minFromTwoNumbers(pA,pB);
	cout<<endl;
	return 0;
}

int minFromTwoNumbers(int n1, int n2)
{
	return n1<n2?n1:n2;
}

void minFromTwoNumbers()
{
	cout<< ((globalNum1<globalNum2)?globalNum1:globalNum2);
}

void minFromTwoNumbers(int* n1, int* n2)
{
	cout<< ((*n1)<(*n2)?*n1:*n2);
}



