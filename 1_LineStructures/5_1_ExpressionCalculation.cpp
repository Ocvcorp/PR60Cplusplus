//Часть1.Пример2.

#include <iostream>
#include <string>
#include <math.h>
#include <locale>
using namespace std;
#define PRINT_RESULT(X) cout<<#X<<"= "<<X<<endl;
#define PRINT_INPUT(X) cout<<#X<<": "<<X<<"\t";

int main()
{
  double Y, X, A, B, // результат и входные значения
	   numr, nPart1, nPart2, nPart3, nPart4, nPart5, // числитель и части числителя
	   denumr, denPart1, denPart2, denPart3, denPart4, denPart5; //знаменатель и части знаменателя

setlocale(LC_ALL,"Russian");

A=4; B=3;

X=0.5; 
nPart1=pow(A-B,1.0/3); nPart2=pow(A+B,2.0/3); nPart3=X*X; //части числителя
denPart1=(A*A-B*B)*(A*A-B*B); denPart2=pow(X,4); //части знаменателя
numr=nPart1*nPart2*nPart3; // числитель
denumr=denPart1-denPart2; // знаменатель
Y=pow(numr/denumr,1.0/X); //результат
cout<<"Результаты 1_2_2:"<<endl;
PRINT_INPUT(X)
PRINT_INPUT(A)
PRINT_INPUT(B)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=pow((pow(A-B,1.0/3)*pow(A+B,2.0/3)*X*X)/(pow(A,4)+pow(B,4)-2*pow(A,2)*pow(A,2)-pow(X,4)),1.0/X);
PRINT_RESULT(Y)

X=1;
nPart3=X*X;
denPart2=pow(X,4);
numr=nPart1*nPart2*nPart3;
denumr=denPart1-denPart2;
Y=pow(numr/denumr,1.0/X);
PRINT_INPUT(X)
PRINT_INPUT(A)
PRINT_INPUT(B)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=pow((pow(A-B,1.0/3)*pow(A+B,2.0/3)*X*X)/(pow(A,4)+pow(B,4)-2*pow(A,2)*pow(A,2)-pow(X,4)),1.0/X);
PRINT_RESULT(Y)

X=2;
nPart3=X*X;
denPart2=pow(X,4);
numr=nPart1*nPart2*nPart3;
denumr=denPart1-denPart2;
Y=pow(numr/denumr,1.0/X);
PRINT_INPUT(X)
PRINT_INPUT(A)
PRINT_INPUT(B)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=pow((pow(A-B,1.0/3)*pow(A+B,2.0/3)*X*X)/(pow(A,4)+pow(B,4)-2*pow(A,2)*pow(A,2)-pow(X,4)),1.0/X);
PRINT_RESULT(Y)
return 0;
}
