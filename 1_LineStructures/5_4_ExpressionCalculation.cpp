//Часть1.Пример5.

#include <iostream>
#include <string>
#include <math.h>
#include <locale>
using namespace std;
#define PRINT_RESULT(X) cout<<#X<<"= "<<X<<endl;
#define PRINT_INPUT(X) cout<<#X<<": "<<X<<"\t";

int main()
{

double X, Y, A,
	   numr, nPart1, nPart2, nPart3, nPart4, nPart5, // числитель и части числителя
	   denumr, denPart1, denPart2, denPart3, denPart4, denPart5; //знаменатель и части знаменателя

setlocale(LC_ALL,"Russian");

//Часть1. Пример5.
cout<<"Результаты 1_2_5:"<<endl;
A=2;
X=-3;
nPart1=pow(A,X); nPart2=-pow(nPart1,2)/3; nPart3=pow(nPart1,3)*4/3/5;
nPart4=-pow(nPart1,4)*6/3/5/7;
Y=nPart1+nPart2+nPart3+nPart4;//результат
PRINT_INPUT(A)
PRINT_INPUT(X)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=pow(A,X)-pow(A,2*X)/3+pow(A,3*X)*4/(3*5)-pow(A,4*X)*6/(3*5*7);
PRINT_RESULT(Y)

X=0;
nPart1=pow(A,X); nPart2=-pow(nPart1,2)/3; nPart3=pow(nPart1,3)*4/3/5;
nPart4=-pow(nPart1,4)*6/3/5/7;
Y=nPart1+nPart2+nPart3+nPart4;//результат
PRINT_INPUT(A)
PRINT_INPUT(X)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=pow(A,X)-pow(A,2*X)/3+pow(A,3*X)*4/(3*5)-pow(A,4*X)*6/(3*5*7);
PRINT_RESULT(Y)

X=3;
nPart1=pow(A,X); nPart2=-pow(nPart1,2)/3; nPart3=pow(nPart1,3)*4/3/5;
nPart4=-pow(nPart1,4)*6/3/5/7;
Y=nPart1+nPart2+nPart3+nPart4;//результат
PRINT_INPUT(A)
PRINT_INPUT(X)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=pow(A,X)-pow(A,2*X)/3+pow(A,3*X)*4/(3*5)-pow(A,4*X)*6/(3*5*7);
PRINT_RESULT(Y)
 return 0;
}








