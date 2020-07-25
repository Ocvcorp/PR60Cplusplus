#include <iostream>
using namespace std;
int main()
{
	int const N=5;
	int arr[5]={4, 5, -6, 7, -9};
	cout<<"the array: ";
	for (int i=0; i<5; i++)
	{
		cout<<*(arr+i)<<" ";
		}
	cout<<endl;
	cout<<"even indexed elements: ";
	for (int i=0; i<5; i++)
	{
		if (!(i%2)) cout<<*(arr+i)<<" ";
		}
	cout<<endl;
	return 0;
}