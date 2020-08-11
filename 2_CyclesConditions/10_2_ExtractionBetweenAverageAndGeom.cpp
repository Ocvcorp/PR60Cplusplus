//ЛР4-2 Задание А: 2.
/*
2. Из массива D(n), n≤25 переписать элементы,
расположенные между средним геометрическим и средним арифметическим модулей элементов, подряд в массив F. 
Вывести массивы, среднее арифметическое и среднее геометрическое.
*/
#include <iostream>

#include <time.h>
#define nMax 25
#define PRINT(X) cout<<#X<<"="<<X<<endl;
#include <locale>
using namespace std;
int main()
{
	setlocale (0, "");
	int n, sCount;
	float avM, avG, sum, prod;
	srand(time(0));
	cout << "введите кол-во эл-ов массива не более " << nMax << endl;// << "и не менее 2х" << endl;
	cin >>n;
	if (n <= nMax && n > 0)
	{
		float	D[nMax], F[nMax];
		cout << "D: ";
		for (int i = 0; i < n; i++)
		{
			D[i] = float(rand() % 100) - 2.5;
			cout << D[i] << " ";
		}
		cout << endl;
		//avM, avG
		sum = 0; prod = 1;
		for (int i = 0; i < n; i++)
		{
			sum += abs(D[i]);
			prod *= abs(D[i]);
		}
		avM = sum / n;
		avG = pow(prod, 1 / n);
		
		//F (т.к. считали модули, то всегда avM>=avG  (не-во Коши))
		if (avM != avG) {
			
			sCount = 0;
			
			for (int i = 0; i < n; i++)
			{				
				if (D[i] > avG && D[i] < avM)
				{															
					F[sCount] = D[i];
					if (!sCount) cout << "\nF:";
					cout << " "<< F[sCount];
					sCount++;	
				}
				if (D[i] >= avM)
				{
					sCount = 0;
				}
			}
		}
		cout << endl;
		cout << "Среднее геометрическое: ";
			PRINT(avG)
				cout << endl;
		cout << "Среднее арифметическое: ";
			PRINT(avM)
				cout << endl;
		if (!sCount) cout << "в массиве F нет элементов из D между " << avG <<" и "<<avM<<endl;
		
	}
	else
	{
		cout << "неверный ввод" << endl;
	}
	
	system("pause");
	return 0;
}