/*
	9.	Использовать объединения для задания параметров трех разных геометрических фигур: 
	круга, прямоугольника и треугольника. Создать массив структур с информацией о типе геометрической фигуры 
	(круг, прямоугольник, треугольник), ее параметрах (радиус; основание и высота; три стороны).
	Вычислить значение поля площадь для структур массива.
*/

#include <iostream>
#include <corecrt_math_defines.h>
using namespace std;
double qeronSquare(double a, double b, double c);

typedef union{
double r;
double pr[2];
double tr[3];
} square;


typedef  struct
{
	int tip;
	square sF;
}figure;

int main()
{
	int nSides;
	figure fS;
	while (1) {
	cout << "Enter a figure type: ";
	cin >> nSides;
	switch (nSides)
	{
	case 1:
	{
		cout << "Enter radius ";
		cin >> fS.sF.r;
		cout << "Square is " << M_PI*fS.sF.r*fS.sF.r;
		break;
	}
	case 2: {
		cout << "Enter two sides \n";
		cin >> fS.sF.pr[0] >> fS.sF.pr[1];
		cout << "Square is " << fS.sF.pr[0] * fS.sF.pr[1];
		break;
	};
	case 3: {
		cout << "Enter three sides \n";
		cin >> fS.sF.tr[0] >> fS.sF.tr[1] >> fS.sF.tr[2];
		cout <<"Square is "<< qeronSquare(fS.sF.tr[0], fS.sF.tr[1], fS.sF.tr[2]);
		break;
	};
	}

	cout << endl;
}

system("pause");
 return 0;
}

double qeronSquare(double a, double b, double c) {
	double p;
	p = (a + b + c) / 2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}