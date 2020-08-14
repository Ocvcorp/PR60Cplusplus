#include <iostream>
using namespace std;
double maxOF4(double,double,double,double);

int main()
{
	double n1,n2,n3, n4;
	cout<<"input 4 numbers\n";
	cin>> n1>>n2>>n3>> n4;
	cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
	cout<<"Maximum in input row is "<<maxOF4(n1,n2,n3,n4)<<endl;

	return 0;
}

double maxOF4(double n1,double n2,double n3,double n4)
{
	double maxOF2;
	maxOF2=(n4>n3)?n4:n3;
	maxOF2=(n2>maxOF2)?n2:maxOF2;
	return (n1>maxOF2)?n1:maxOF2;
}