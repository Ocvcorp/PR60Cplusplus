#include<iostream>
#include <istream>
#include<cstring>
using namespace std;

class base {
	public: virtual void fun(int i) { cout << "base " << i<<endl; }
};

class divv:public base {
	public: virtual void fun(int i) { cout << "div " << i<<endl; }
};


int main()
{
	base B, *pB = &B;
	divv  D, *pD = &D;
	divv *pbD = (divv*)pB;
	pbD->fun(7);
	system("pause");
	return 0;
}