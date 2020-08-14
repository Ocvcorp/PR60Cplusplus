/*
ЛР9.
Задание 2. Создать проект. Написать и отладить рекурсивную функцию печати целого числа в двоичном формате. 
Прототип: void bit_element(int  n); 
Если входной элемент равен 0, то указанная функция завершает работу и начинается обратный ход, если нет, 
то рекурсивно вызывается  bit_element(n/2);
*/
#include <iostream>

using namespace std;
void bit_element(int  n);


int main()
{
	int n;
	cout << "Enter a number";
	cin>>n;
	cout<<n<<"(10)=1";
	bit_element(n);
	cout<<"(2)\n";
	
	system("pause");
	return 0;
}

void bit_element(int  n)
{
	int divR, modR;
	divR=n/2; 
	modR=n%2;
	
	if (divR==0)return;	
	
	bit_element(divR);
	cout << modR;

}



