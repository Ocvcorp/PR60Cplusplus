// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(0));
	const int n = 10;
	int mas[n];
	FILE *f;
	fopen_s(&f, "1.bin", "wb");
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand()%100-50;
	}
	fwrite(mas, n, 4, f);

	fclose(f);
	
	FILE *f2;
	fopen_s(&f2, "1.bin", "rb+");
	int d, maxD, minD, iMax, iMin;
	maxD = -1000000000;
	minD = 100000000;
	iMax = iMin = 0;
	while (fread(&d, 1, 4, f2))
	{
		cout << d << endl;
		if (maxD < d)
		{
			maxD = d; 
			iMax = ftell(f2)-4;
		}
		if (minD > d)
		{
			minD = d;
			iMin = ftell(f2)-4;
		}
	}
	
	cout << "Maximum: " << maxD <<" Position: "<<iMax << endl;
	cout << "Minimum: " << minD << " Position: " << iMin << endl;
	
	fseek(f2, iMax, 0);
	fwrite(&minD, 1, 4, f2);
	fseek(f2, iMin, 0);
	fwrite(&maxD, 1, 4, f2);
	//fclose(f2);
	
	/*FILE *f3;
	fopen_s(&f3, "1.bin", "rb");*/
	cout << "Result: " << endl;
	fseek(f2, 0, 0);
	while (fread(&d, 1, 4, f2))
	{
		cout << d << endl;
	}
	fclose(f2);
	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
