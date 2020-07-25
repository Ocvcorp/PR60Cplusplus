/*
Семинар 3.1 Задача 4
Массив из N эл-ов заполнить простыми числами;
*/

#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int const N = 8;
	int arr[N];
	//заполняем массив
	int i=1,s=3;
	int modS;
	arr[0]=2;
	while (i < N)
	{		
		for (int j=2;j<s;j++)
		{
			modS= s%j;
			if (!modS){break;}
		}
		if (modS>0) 
		{
			arr[i]=s;
	    	i++;
		}
		s++;
		
	}
	
	//вывод массива
	cout << "Array:\n";
	for (int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	system("pause");
	return 0;

}