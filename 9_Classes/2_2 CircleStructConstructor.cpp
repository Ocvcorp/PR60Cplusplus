/*
СР6-1
	3.
		1. Для ранее созданного класса circle создать конструктор общего вида, 
		конструктор копирования и конструктор умолчания, не принимающий аргументов, 
		проверить работу всех этих конструкторов.
		2. Создать деструктор для класса circle, 
		выводящий сообщение и обнуляющий поле радиуса.

*/
#include <iostream>
#include <math.h>
using namespace std;

struct circle{
	double r;
	circle():r(5){cout<<"\nDefault constructor";}
	circle(double r0):r(r0){cout<<"\nCommon constructor";}	
	circle(const circle& C1):r(C1.r){cout<<"\nCopy constructor";}	
	double Diametr() {return 2*r;}
	double CircleLength() {return 2*3.14*r;}
	double CircleSquare() {return 3.14*3.14*r;}
	void displayInfo(){cout<<"A circle with radius "<<r<<" created!\n";}
	~circle(){
				cout<<"A distuctor. \"r\" was "<< r <<" ";
				r=0;
				cout<<" Now r = "<<r<<endl;
			}
};

int main()
{
	circle C0;
	circle C1(15);
	circle C2(C1);
	cout<<"\nC2: ";
	C2.displayInfo();
	
	return 0;
}