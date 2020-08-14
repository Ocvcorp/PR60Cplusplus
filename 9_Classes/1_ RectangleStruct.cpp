/*
СР6-1
1.
1) Дополнить класс rectangle методами вычисления площади прямоугольника, 
полупериметра, длины диагонали; 
добавить в этот класс поле angle (угол), 
хранящий информацию об угле поворота прямоугольника (в градусах), 
и метод rotate(double grad), изменяющий значение угла поворота на число градусов grad.
*/
#include <iostream>
#include <math.h>
using namespace std;

struct rectangle{
double width;
double height;
double angle;
double perimeter() {return width*2 + height*2;}
double semiPerimeter() {return perimeter()/2;}
double recSquare() {return width*height;}
double diagonal() {return sqrt(width*width+height*height);}
void rotate(double ang){angle=ang;}

void printData(){
	cout << "width = " << width << endl;
	cout << "height = " << height << endl;
	}
};

int main()
{// Определение объекта класса:
	rectangle R1; // Можно инициализировать: rectangle R1 = {5, 3.5};
	R1.width = 3; R1.height = 4; // Присваивание значений в поля данных
	R1.printData(); // Вызов метода
	cout << "\nPerimeter = " << R1.perimeter();
	cout << "\nSemiPerimeter = " << R1.semiPerimeter();
	cout << "\nSquare = " << R1.recSquare();
	cout << "\nDiagonal = " << R1.diagonal();
	R1.rotate(10);
	cout << "\nAngle = " << R1.angle;
	return 0;
}
