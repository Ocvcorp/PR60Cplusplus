//Часть1.Пример3.

#include <iostream>
#include <string>
#include <math.h>
#include <locale>
using namespace std;
#define PRINT_RESULT(X) cout<<#X<<"= "<<X<<endl;
#define PRINT_INPUT(X) cout<<#X<<": "<<X<<"\t";

int main()
{

double X, Y,
		numr, nPart1, nPart2, nPart3, nPart4, nPart5, // числитель и части числителя
	   denumr, denPart1, denPart2, denPart3, denPart4, denPart5; //знаменатель и части знаменателя
setlocale(LC_ALL,"Russian");

cout<<"Результаты 1_2_3:"<<endl;
X=0.001;
PRINT_INPUT(X)
cout<<"\n";
X=X*M_PI/180;//перевод в радианы
nPart1=abs(sin(X)*cos(X)); nPart2=tan(X);
denPart1=sin(X)+cos(X); denPart2=sin(X)*cos(X);
numr=nPart1+nPart2;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(abs(sin(X)*cos(X))+tan(X))/(sin(X)+sin(X)*cos(X)+cos(X));
PRINT_RESULT(Y)

X=15;
PRINT_INPUT(X)
cout<<"\n";
X=X*M_PI/180;//перевод в радианы
nPart1=abs(sin(X)*cos(X)); nPart2=tan(X);
denPart1=sin(X)+cos(X); denPart2=sin(X)*cos(X);
numr=nPart1+nPart2;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(abs(sin(X)*cos(X))+tan(X))/(sin(X)+sin(X)*cos(X)+cos(X));
PRINT_RESULT(Y)

X=30;
PRINT_INPUT(X)
cout<<"\n";
X=X*M_PI/180;//перевод в радианы
nPart1=abs(sin(X)*cos(X)); nPart2=tan(X);
denPart1=sin(X)+cos(X); denPart2=sin(X)*cos(X);
numr=nPart1+nPart2;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(abs(sin(X)*cos(X))+tan(X))/(sin(X)+sin(X)*cos(X)+cos(X));
PRINT_RESULT(Y)

X=60;
PRINT_INPUT(X)
cout<<"\n";
X=X*M_PI/180;//перевод в радианы
nPart1=abs(sin(X)*cos(X)); nPart2=tan(X);
denPart1=sin(X)+cos(X); denPart2=sin(X)*cos(X);
numr=nPart1+nPart2;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(abs(sin(X)*cos(X))+tan(X))/(sin(X)+sin(X)*cos(X)+cos(X));
PRINT_RESULT(Y)

X=270;
PRINT_INPUT(X)
cout<<"\n";
X=X*M_PI/180;//перевод в радианы
nPart1=abs(sin(X)*cos(X)); nPart2=tan(X);
denPart1=sin(X)+cos(X); denPart2=sin(X)*cos(X);
numr=nPart1+nPart2;//числитель
denumr=denPart1+denPart2;//знаменатель
Y=numr/denumr;//результат
PRINT_RESULT(Y)
cout<<"Проверка по формуле без использования скобочных форм"<<endl;
Y=(abs(sin(X)*cos(X))+tan(X))/(sin(X)+sin(X)*cos(X)+cos(X));
PRINT_RESULT(Y)

return 0;
}