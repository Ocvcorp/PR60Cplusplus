/*
Семинар 1-3
задача 5
Пользователь вводит количество секунд, прошедшее с некоторого момента. Вывести на экран это количество времени в формате: дни часы минуты секунды.

*/
#include <iostream>
#include <math.h>
#include <locale>
#define PRINT(X) cout<<#X<<"="<<X<<endl;
using namespace std;
int main()
{
	int M, S, D, H, Min, Sec,
	mD, mH;
	setlocale(LC_ALL, "Russian");
	//сумма...частное
	cout << "введите кол-во сек с 31ой сек 40ой минуты 6ого часа среды"<<endl;
	cin>>S;
	//перевод момента в секунды
	M=31+40*60+6*3600+3*24*3600;   
    D=(M+S)/24/3600;
    mD=(M+S)%(24*3600);
    H=mD/3600;
    mH=mD%3600;
    Min=mH/60;
    Sec=mH%60;
    printf("Через %d сек настал %d-й день %d-ой час %d-ая  минута %d-ая  секунда", S, D, H, Min, Sec);
	system("pause");
	return 0;
}