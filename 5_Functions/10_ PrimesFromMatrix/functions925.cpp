#include "functions925.h"
#include<time.h>
#include <iostream>

bool isPrimeNum(int num)
{
	if (num==0||num==1) return false;
	int i=2;
	while (i<num)
	{
		if (num%i==0) return false;
		i++;
	}
	return true;		
}
void mtrxRandInit(int *nR, int *nC,matrix M,int lim=11){
	srand(time(0));
	std::cout<<"Enter a number of rows and columns:\n ";
	std::cin>>*nR>>*nC;
	for (int i=0; i<*nR;i++){
		for (int j=0; j<*nC;j++){
			M[i][j]=rand()%(lim+1);
		}
	}
}
void mtrxOutput(const int nR, const int nC, matrix M)
{
	for (int i=0; i<nR;i++){
		for (int j=0; j<nC;j++){
			std::cout<<M[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
}

int columnRFPN(int rowCount, const int nC, matrix M)//Column of row First Prime Number
{
	for (int i=0;i<nC;i++)
	{
		if (isPrimeNum(M[rowCount][i])) return i;
	}
	return -1;
}

void finalArrayOutput(const int nR, const int nC, matrix M)
{
	int cCnt;
	for (int i=0; i<nR;i++)
	{
		cCnt=columnRFPN(i,nC,M);
		if (cCnt==-1) std::cout<<0<<" ";
		else std::cout<<M[i][cCnt]<<" ";
	}
}

