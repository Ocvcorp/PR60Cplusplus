/*
3.3
В массиве из N эл-ов найти кол-во эл-ов больше среднего;
*/

#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(0));
	int const N = 8;
	int arr[N];
	//инициализируем массив
	cout << "Array:\n";
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 11;
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	float sum=0, avVal;
	//ищем сумму эл-ов
	for (int i = 0; i < N; i++)
	{
		sum+=arr[i];
	}
	//среднее
	avVal=sum/N;
	cout<<"Average value: "<<avVal<<endl;
	int countUpAv=0;
	//поиск решения:
	cout << "Array with superior elements:\n";
	for (int i = 0; i < N; i++)
	{
		if (float(arr[i])>avVal)
		{
		countUpAv++;
		cout <<"<" <<arr[i]<<">" << " ";
		}
		else
		{
			cout<<arr[i]<<" ";
		}
	}
	cout<<endl;
	cout << "Array has "<<countUpAv<<" elements more than "<<avVal<<endl;
	
	
	system("pause");
	return 0;

}