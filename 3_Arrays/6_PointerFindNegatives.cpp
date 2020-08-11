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
	cout<<"negative elements: ";
	for (int i=0; i<5; i++)
	{
		if ((*(arr+i))<0) cout<<*(arr+i)<<" ";
		}
	cout<<endl;
	return 0;
}