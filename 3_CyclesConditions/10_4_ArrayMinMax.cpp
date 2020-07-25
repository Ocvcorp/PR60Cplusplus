//ЛР4-2 Задание А 3.
/*
3. Найти наибольшее и наименьшее значения и их индексы в массиве D(n), n≤25. Наименьший элемент заменить суммой предшествующих элементов,
а наибольший - произведением последующих. 
Вывести массив, наименьшее, наибольшее значения, их индексы, сумму и произведение.
*/
#include <iostream>
#include <math.h>
#include <locale>
#define nMax 2001


using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	
	float minY, maxY, minX, maxX,X0, X;
	float const ddx = .01;
	float Y[nMax];
	X0 = -5;
	minY = FLT_MAX;  maxY = FLT_MIN;	
	for (int i = 0; i < nMax; i++)
	{
		X =X0 +ddx*i;
		Y[i] = 3 * pow(X, 3) - 15 * X*X - 12 * X + 8;
		if (Y[i] < minY) {
			minY = Y[i]; 
			minX = X;
		}
		if (Y[i] > maxY) { 
			maxY = Y[i];
			maxX = X;
		}
	}


	
	cout << "Y=3*X^3-15X^2-12X+8"<<endl;
	cout << "Максимальное: " << maxY << " Аргумент: " << maxX << endl;
	cout << "Минимальное: " << minY << " Аргумент: " << minX << endl;
	
	system("pause");
	return 0;
}