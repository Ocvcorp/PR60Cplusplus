/*
СР6-1
1.
2) Создать класс circle (окружность), имеющий поле r – радиус окружности, 
добавить в этот класс методы получения диаметра, длины окружности, площади круга.

*/
#include <iostream>
#include <math.h>
using namespace std;

struct circle{
	double r;
	double Diametr() {return 2*r;}
	double CircleLength() {return 2*3.14*r;}
	double CircleSquare() {return 3.14*3.14*r;}
	void displayInfo(){cout<<"\nA circle with radius "<<r<<" created!";}
};

int main()
{
	circle C;
	C.r=5;
	C.displayInfo();
	cout<<"\nDiametr = "<<C.Diametr();
	cout<<"\nCircle length = "<<C.CircleLength();
	cout<<"\nCircle square = "<<C.CircleSquare();
}