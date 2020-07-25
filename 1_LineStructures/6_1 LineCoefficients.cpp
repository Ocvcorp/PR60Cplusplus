//Часть2.Пример2.
/*Определить коэффициенты прямой Y=K·X+B,
 проходящей через точки с координатами (X1, Y1) и (X2, Y2) 
 и найти точку пересечения этой прямой с осью абсцисс*/
#include <iostream>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int main()
{

setlocale(LC_ALL,"Russian");
double X1, Y1, X2, Y2, X0,Y0, // входные данные
	   K, B; //искомые значения

X1=3; Y1=3; X2=5; Y2=6;

//коэффициенты
K=(Y2-Y1)/(X2-X1);
B=Y1-K*X1;
//т.п. с осью абсцисс
X0=0;
Y0=K*X0+B;

cout<<"Уравнение прямой: y=" << K<<"x+"<<B<<endl;
cout<<"Точка пересечения с осью абсцисс:\t("<<X0<<","<<Y0<<")\n"; 

return 0;
}







