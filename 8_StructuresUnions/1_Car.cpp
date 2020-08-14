/*
Семинар 5_2
1. Создайте структуру car, хранящую информацию об автомобиле 
(марка, модель, объём двигателя, год выпуска, цвет и т.п.). 
В функции main() создайте массив типа car. 
Занесите в массив 
и выведите из массива на экран данные о нескольких автомобилях.

*/

#include <iostream>
#include <cstring>
using namespace std;
struct car{
	char brand[50];
	char model[50];
	int motorV;
	int yearM;
	char color[50];
};

void printCar(car );

void convert2Struct(car &c, char*, char*, int, int , char* );


int main()
{
	
	car cars[4];
	convert2Struct(cars[0],(char*)"bmw",(char*)"X5",2400,2018,(char*)"black");
	convert2Struct(cars[1],(char*)"mercedes",(char*)"c120",2000,1997,(char*)"white");
	convert2Struct(cars[2],(char*)"lada",(char*)"XRay",1800,2010,(char*)"red");
	convert2Struct(cars[3],(char*)"nissan",(char*)"qashkai",2000,2007,(char*)"blue");
	
	cout<< "An information about cars:\n";

	printCar(cars[1]);
	printCar(cars[2]);
	cout<<"end\n";
	system("pause");
	return 0;
}

void printCar(car someCar)
{
	
	cout<<"---------Automobile---------\n";
	cout<<"Brand:       "<<someCar.brand<<endl;
	cout<<"Model:       "<<someCar.model<<endl;
	cout<<"Man. year:   "<<someCar.yearM<<endl;
	cout<<"Motor vol.:  "<<someCar.motorV<<endl;
	cout<<"Color:       "<<someCar.color<<endl;
}

void convert2Struct(car &c, char* cBrand, char* cModel, int cYear, int cMVol, char* cColor)
{
	strcpy(c.brand,cBrand);
	strcpy(c.model,cModel);
	c.motorV=cMVol;
	c.yearM=cYear;
	strcpy(c.color,cColor);
}
