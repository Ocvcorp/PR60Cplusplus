//Часть2.Пример3.
/*Вычислить координаты точек пересечения прямой и окружности на плоскости. 
A·X+B·Y=C, X2+Y2=R2. Проверить результаты подстановкой в уравнения. */
#include <iostream>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int main()
{

setlocale(LC_ALL,"Russian");
double A, B, C, R, // входные данные
	   ke, be, D, numr, denumr,//промежуточные значения для упрощения
	   x1, x2, y1, y2; //искомые значения
// входные данные
A=1; B=2; C=3;
R=1; 
//промежуточные значения
ke=-A/B; be=C/B;
D=pow(2*ke*be,2)-4*ke*ke*(be*be-R*R);

//искомые значения
numr=pow(D,1./2)-2*ke*be-1;
denumr=2*ke*ke;
x1=pow(numr/denumr,1./2);
x2=-x1;
y1=ke*x1+be;
y2=ke*x2+be;

cout<<"Точка пересечения с осью абсцисс:\t("<<x1<<","<<y1<<")\n"; 
cout<<"Точка пересечения с осью абсцисс:\t("<<x2<<","<<y2<<")\n"; 

return 0;
}







