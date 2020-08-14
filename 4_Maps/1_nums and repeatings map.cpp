/*—4_1
1. ¬вести число N, создать динамический массив из N целых (int) элементов.
—оздать словарь (map), записать соответстви€ чисел из массива и количества повторений этих чисел. map<int, int>

3 5 6 3 7 3 6

{
{3, 3},
{5, 1},
{6, 2},
{7, 1}
}
*/
#include <iostream>
#include <time.h>
#include <map>
using namespace std;

int main()
{
	srand(time(0));
	int N;
	cout << "Enter array count(N)\n";
	cin>> N;
	int *mas = new int[N];
	cout << "Initial array:\n";

	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 11;
		cout << mas[i] << " ";
	}
	cout << endl;
	
	map<int, int> arrElements;
	cout << "A map with repeated values:\n";
	
	for (int i = 0; i < N; i++) {
		arrElements[mas[i]] = arrElements[mas[i]] + 1;
	}

	for (const pair<int, int> & item : arrElements) {
		cout << "("<< item.first << "," << item.second <<")"<< endl;
	}

	system("pause");
	return 0;
}