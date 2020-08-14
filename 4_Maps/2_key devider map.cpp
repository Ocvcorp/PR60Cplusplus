/*С4_1
2 Создать словарь map<int, int>, сохранить количество чисел, которые делятся на ключи словаря от 1 до 9.
*/
#include <iostream>
#include <time.h>
#include <map>
using namespace std;

int main()
{
	srand(time(0));
	const int N=9;
	map<int, int> initMap;
	for (int i = 1; i <= N; i++)
	{
		initMap[i] = rand() % 72+1;
	}
	
	cout << "Initial map:\n";
	for (const pair<int, int> & item : initMap) {
		cout << "("<< item.first << "," << item.second <<")"<< endl;
	}

	map<int, int> newMap;	
	for (int i = 1; i <= N; i++) {
		if (!(initMap[i] % i)) 
		{
			newMap[i] = initMap[i];
		}
	}
	cout << "A new map with dividable for indices values:\n";
	for (const pair<int, int> & item : newMap) {
		cout << "(" << item.first << "," << item.second << ")" << endl;
	}


	system("pause");
	return 0;
}