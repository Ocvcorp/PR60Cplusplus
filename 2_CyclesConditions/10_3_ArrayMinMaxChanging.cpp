//ЛР4-2 Задание А 3.
/*
3. Найти наибольшее и наименьшее значения и их индексы в массиве D(n), n≤25. Наименьший элемент заменить суммой предшествующих элементов,
а наибольший - произведением последующих. 
Вывести массив, наименьшее, наибольшее значения, их индексы, сумму и произведение.
*/
#include <iostream>
#include <locale>
#include <time.h>
#define nMax 25


using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int n, iMin, iMax;
	float minD, maxD, sum, prod;
	srand(time(0));
	cout<<"введите кол-во эл-ов массива, не более "<<nMax << "и не менее 2х" <<endl;
	cin >>n;
	if (n <= nMax && n > 2) {
		float	D[nMax];
		cout << "D:    ";
		for (int i = 0; i < n; i++)
		{
			D[i] = float(rand() % 11 - 1.1);
			cout << D[i] << " ";
		}
		cout << endl;
		//min max
		minD = maxD = D[0];
		for (int i = 1; i < n; i++)
		{
			if (D[i] > maxD) { maxD = D[i]; }
			if (D[i] < minD) { minD = D[i]; }
		}

		//изменяем массив
		
		sum = 0; 
		for (int i = 0; i < n; i++)
		{
			if (D[i] == minD)
			{
				iMin = i;
				break;
			}
			sum += D[i];
		}
		prod = 1;
		for (int i = n-1; i >= 0; i--)
		{
			
			if (D[i] == maxD)
			{
				iMax = i;
				break;
			}
			prod *= D[i];
		}
		D[iMin] = sum; D[iMax] = prod;
		cout << "New D:";
		for (int i = 0; i < n; i++)
		{
			if (i==iMin||i==iMax) 
			{ 
				cout << " \<" << D[i]<<"\>"; 
			}
			else
			{
				cout << " " << D[i];
			}
		}
		cout << endl;
		cout << "Макс: " << maxD << ", индекс: "<<iMax<<endl ;
		cout << "Мин: " << minD << ", индекс: " << iMin << endl;
		cout << "Сумма: " << sum << endl;
		cout << "Произведение: " << prod << endl;

	}
	else
	{cout<<"неверный ввод"<<endl;}
	
	system("pause");
	return 0;
}