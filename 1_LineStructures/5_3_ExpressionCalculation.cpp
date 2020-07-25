//Часть1.Пример4.

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

//Часть1. Пример4.
cout<<"Результаты 1_2_4:"<<endl;
A=2;
X=0.001;
nPart1=pow(X,A); nPart2=pow(A,nPart1);
nPart3=pow(A,A*X); nPart4=pow(X,nPart3);
denPart1=nPart2; denPart2=pow(X,A*X);
numr=nPart2*nPart4;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_INPUT(A)
PRINT_INPUT(X)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(pow(A,pow(X,A))*pow(X,pow(A,A*X)))/(pow(A,A*X)+pow(X,A*X));
PRINT_RESULT(Y)

X=0.1;
nPart1=pow(X,A); nPart2=pow(A,nPart1);
nPart3=pow(A,A*X); nPart4=pow(X,nPart3);
denPart1=nPart2; denPart2=pow(X,A*X);
numr=nPart2*nPart4;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_INPUT(A)
PRINT_INPUT(X)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(pow(A,pow(X,A))*pow(X,pow(A,A*X)))/(pow(A,A*X)+pow(X,A*X));
PRINT_RESULT(Y)

X=1;
nPart1=pow(X,A); nPart2=pow(A,nPart1);
nPart3=pow(A,A*X); nPart4=pow(X,nPart3);
denPart1=nPart2; denPart2=pow(X,A*X);
numr=nPart2*nPart4;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_INPUT(A)
PRINT_INPUT(X)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(pow(A,pow(X,A))*pow(X,pow(A,A*X)))/(pow(A,A*X)+pow(X,A*X));
PRINT_RESULT(Y)

X=4;
nPart1=pow(X,A); nPart2=pow(A,nPart1);
nPart3=pow(A,A*X); nPart4=pow(X,nPart3);
denPart1=nPart2; denPart2=pow(X,A*X);
numr=nPart2*nPart4;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_INPUT(A)
PRINT_INPUT(X)
cout<<"\n";
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(pow(A,pow(X,A))*pow(X,pow(A,A*X)))/(pow(A,A*X)+pow(X,A*X));
PRINT_RESULT(Y)

return 0;
}



