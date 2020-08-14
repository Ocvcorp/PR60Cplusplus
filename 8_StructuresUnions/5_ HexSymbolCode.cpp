/*
Семинар 5_2
2. С помощью битовых полей создайте функцию для вывода шестнадцатеричного кода символа.
*/

#include <iostream>
using namespace std;
void char2hex(unsigned char);
void bin2hex(unsigned,unsigned,unsigned,unsigned);

int main()
{
	unsigned char someChar='l';
	char2hex(someChar);
	cout<<"Checking the result: " << hex << someChar+0<<endl;
	system("pause");
	return 0;
}

void char2hex(unsigned char ch)
{
	
	union {
			unsigned char uc;
			struct{
				unsigned a1:1;
				unsigned a2:1;
				unsigned a3:1;
				unsigned a4:1;
				unsigned a5:1;
				unsigned a6:1;
				unsigned a7:1;
				unsigned a8:1;
			} byte;
		} cod;
	
	cod.uc=ch;
	bin2hex(cod.byte.a5,cod.byte.a6,cod.byte.a7,cod.byte.a8);
	bin2hex(cod.byte.a1,cod.byte.a2,cod.byte.a3,cod.byte.a4);
	cout<<endl;
}

void bin2hex(unsigned c1 ,unsigned c2, unsigned c3, unsigned c4)
{
	unsigned char hexLetters[]={'F','E','D','C','B','A'};
	int sum16;
	sum16=c1+c2*2+c3*2*2+c4*2*2*2;
	if (sum16<10) 
	{
		cout<<sum16;
	}
	else
	{
		cout<<hexLetters[15-sum16];
	}
	
}