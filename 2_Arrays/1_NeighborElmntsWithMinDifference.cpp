/*
3.1
¬ одномерном массиве из N элементов найти и вывести на экран индексы двух соседних элементов, 
разница между которыми по модулю максимальна. ≈сли таких пар несколько, вывести первую.

*/

//#include <iostream>
//#include <time.h>
//using namespace std;
//
//int main() {
//	srand(time(0));
//	int const N = 10;
//	int arr[N];
//	int imd1, imd2;
//	//init arr
//	cout << "Array:\n";
//	for (int i = 0; i < N; i++)
//	{
//		arr[i] = rand() % 11;
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//	int absDef;
//	absDef = abs(arr[1] - arr[0]);
//	for (int i = 1; i < N - 1; i++)
//	{
//		if (abs(arr[i + 1] - arr[i])>absDef)
//		{
//			absDef = abs(arr[i + 1] - arr[i]);
//			imd1 = i;
//			imd2 = i+1;
//		}
//	}
//	cout << "indices are " << imd1 << " and " << imd2 << endl;
//	system("pause");
//	return 0;
//
//}