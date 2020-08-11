#include <iostream>
using namespace std;
int main()
{
	int arr[5]={4, 5, 6, 7, 9};
	for (int i=0; i<5; i++)
	{
		cout<<*(arr+i)<<" ";
		}
	cout<<endl;
	return 0;
}