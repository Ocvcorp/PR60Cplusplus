/* ЛР14
9.	Задание. Создать производный класс "Аэроплан", 
для которого базовыми являются классы "Транспортное средство"  и "Компьютер". 
В классе "Компьютер", который описывает бортовой компьютер самолета, 
прописать защищенное поле baseTimeToBoot – время загрузки компьютера 
– и методы GetTimeToBoot () – возвращает время загрузки компьютера
, обращения к этим полям. 
Вне класса  задать поле значения времени загрузки компьютера по умолчанию DefaultTimeToBoot,
 в конструкторе класса "Компьютер" задавать для поля baseTimeToBoot значения DefaultTimeToBoot,
 если не вводится никакое другое значение. 
 В классе "Аэроплан" выполнить обновление бортового компьютера
 с помощью метода ComputerUpdate (double newTimeToBoot).
 
 */
 
 #include <iostream>
 #include "vehicle.h"
 using namespace std;

 
 
 
 float vehicle::MAX_DISTANCE = 2000;
 float vehicle::MAX_SPEED = 1000;
 double computer::DefaultTimeToBoot=130;

 int main()
 {
	 cout<<"Now we have an airplane ";
	 airplane ap((char*)"LevTolstoy", (char*)"IlAvia",400,500, (char*)"LenovoG3");
	 cout<<ap.getName()<<" of "<<ap.GetCompany()<<" with computer "<<ap.GetCModel()
		<<" booting for "<<ap.GetTimeToBoot()<<"s\n";
	 ap.ComputerUpdate(200);
	 cout <<"Boot time of "<<ap.GetCModel()<<" changed to "<< ap.GetTimeToBoot() <<"s" << endl;

	 
	 system("pause");
	 return 0;
 }	 
 
 
 
 