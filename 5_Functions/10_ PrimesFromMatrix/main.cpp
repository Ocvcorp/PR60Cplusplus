#include "functions925.h"
#include <iostream>

int main()
{
	matrix Mtrx;	
	int m, n;
	std::cout<<std::endl;
	mtrxRandInit(&m, &n, Mtrx);
	std::cout<<"Matrix: \n";
	mtrxOutput(m,n,Mtrx);
	std::cout<<"The final array with first prime numbers from each row (zero if none): \n";
	finalArrayOutput(m, n, Mtrx);
	
	system("pause");
	return 0;
}