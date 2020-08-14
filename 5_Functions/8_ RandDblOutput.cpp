#include <iostream>
#include <time.h>
using namespace std;
double randdouble();
int main()
{
	srand(time(0));
	int num;
	do{
		cout<<"Random double type value: ";
		cout<<randdouble()<<endl;
		cout<<"input non-zero to continue \n";
		cin>>num;
		if (!num) break;
	}while(1);
}

double randdouble() {
	return (double)(rand()%10)/1.1;
}