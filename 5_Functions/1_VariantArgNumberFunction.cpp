/*С4_1
1. Определить функцию с переменным количеством аргументов. 
В качестве первого параметра передать количество последующих аргументов. 
Функция должна возвращать среднее от значений самого наименьшего и наибольшего аргументов (кроме первого) 
за вычетом среднего арифметического всех аргументов (кроме первого).

*/
#include <iostream>
#include <cstdarg>
#define PRINT(X) cout<<#X<<" = "<<X<<endl;

using namespace std;
double averagesFun(int N, ...);

int main() 
{
	PRINT(averagesFun(1, 10))
		PRINT(averagesFun(2, 10, 20))
		PRINT(averagesFun(3, 10, 25, 30))
		PRINT(averagesFun(4, 120, 30, 30, 50))
		system("pause");
	return 0;
}

double averagesFun(int N, ...)
{
	va_list p;
	va_start(p, N);
	int minArg = va_arg(p, int);
	va_end(p); va_start(p, N);
	int maxArg = va_arg(p, int);
	va_end(p); va_start(p, N);
	int sum = 0;
	int cValue;
	int k = N;
	for (; k > 0; k--){
		cValue = va_arg(p, int);
		sum += cValue;
		if (minArg > cValue) minArg = cValue;
		if (maxArg < cValue) maxArg = cValue;
	}
	va_end(p);
	return (double)((minArg + maxArg) / 2 - sum / N);

}