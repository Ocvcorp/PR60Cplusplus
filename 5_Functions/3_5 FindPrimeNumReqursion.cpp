/*
ЛР9.
Задание 1. Создать рекурсивную функцию, которая на вход получает целое число, ищет простой множитель для этого числа,
 если находит, то выводит этот множитель на экран, после чего рекурсивно вызывает себя для числа разделённого на найденный множитель. 
 И после завершения вызванной программы заканчивает работу. Если простого 
 множителя не найдено, то функция выводит исходное число и заканчивает работу. Прототип функции: void prime_factor(int n);
*/
#include <iostream>

using namespace std;
void prime_factor(int n);
int simple_num(int n);

int main()
{
	int n;
	cin>>n;
	cout<<n<<"=1";
	prime_factor(n);
	system("pause");
	return 0;
}

void prime_factor(int n)
{
	int smpNum;
	smpNum=simple_num(n);
	cout<<"*"<<smpNum;
	if (smpNum==n){return;}
	else
	{prime_factor(n/smpNum);}
}

int simple_num(int n)
{
	int i,j;
	i=2;
	for (int i=2;i<=n;i++)
	{
		if (n%i==0){
			for(int j=2; j<=i; j++)
				{
					if (i%j==0)
					{				
						return j;
					}
				}
		}
	}
}