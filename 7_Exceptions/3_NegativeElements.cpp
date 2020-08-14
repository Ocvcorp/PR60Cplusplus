/*

7.	Задание. Создать массив, состоящий из 10 чисел. Вывести все отрицательные элементы с помощью обработчика исключений.
*/
#include<iostream>
#include <time.h>
using namespace std;


#define N 10
int main(){
	int mas[N];
	srand(time(0));
	cout<<"\nInitial array: \n";
		for(int i=0; i<N; i++)
		{
			mas[i]=rand()%21-10;
			cout<<mas[i]<<" ";
		}	
		cout<<"\nNegative elements: \n";
		for(int i=0; i<N; i++){
			try{
			 if (mas[i]<0) throw i;}
			catch (int n){
				cout<<mas[n]<<" ";
			}
			
		}
		cout<<endl;
	system("pause");
	return 0;
}
