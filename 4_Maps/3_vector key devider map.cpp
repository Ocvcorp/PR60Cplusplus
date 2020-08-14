/*С4_1
3. Создать словарь map<int, vector<int>>, 
где первое значение - делитель, а ворое - числа из массива, которые делятся на этот делитель.
*/
#include <iostream>
#include <time.h>
#include <map>
#include <vector>
using namespace std;

int main()
{
	srand(time(0));
	const int N=9;
	int mas[N];
	cout << "Initial array:\n";

	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 11+1;
		cout << mas[i] << " ";
	}
	cout << endl;
	
		
	map<int, vector<int>> myMap;
	int mN=11;
	for (int j = 1; j <= mN; j++) 
	{
		for (int i = 0; i < N; i++)
		{
			if (!(mas[i]%j))
			{
				myMap[j].push_back(mas[i])  ;
			}
		}
	}
	cout << "Map:\n";
	for (const auto & item : myMap) 
	{
		cout << "(" << item.first << ", ( ";
		for (const auto vec : item.second)
		{
			cout << vec << " ";
		}
		cout<< "))" << endl;
	}
	cout << endl;
	


	system("pause");
	return 0;
}