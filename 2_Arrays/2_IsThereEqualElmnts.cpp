/*
Семинар 3.1 Задача 2.
В массиве из N эл-ов проверить, есть ли повторяющиеся эл-ты;
*/

#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(0));
	int const N = 8;
	int arr[N];
	//init arr
	cout << "Array:\n";
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 11;
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	int currInd, repInd=-1;
	for (int i = 0; i < N - 2; i++)
	{
		currInd=i;
		for (int j = i+1; j < N; j++)
		{
			if (arr[i]==arr[j])
			 {
			 	repInd=j;
			 	break;
			}
		}
		if (repInd>0) break;
	}
	cout << "Array has";
	if (repInd>0) 
	{ cout<< " at least a pair of repeated elements with " <<currInd  <<" and " <<  repInd<<" indices\n"; }
	else 
	{cout<<" no repeated elements\n";}
	
	
	system("pause");
	return 0;

}