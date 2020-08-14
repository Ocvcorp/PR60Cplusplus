/* ЛР12 
14.	Создать класс "Транспортное средство", 
в нем описать поля: 
-наименование ТС, 
-скорость ТС, 
-пройденное расстояние, 
-статические поля - максимальное расстояние MAX_DISTANCE, максимальная скорость MAX_SPEED,
методы:
- получения информации о скорости, 
- получения информации о текущем пробеге, 
- получения информации о текущем времени эксплуатации,
- установки имени транспортного средства, 
конструктор с полями по умолчанию, деструктор. 
Описание класса производить в отдельном cpp файле с внешним определением функций класса.
*/
#include <iostream>
#include "vehicle.h"
using namespace std;

float vehicle::MAX_DISTANCE = 100;
float vehicle::MAX_SPEED = 120;

int main()
{
	cout << "Default constructor: ";
	vehicle v1;
	cout << v1.getName() << " / " << v1.getSpeed() << "km/h / " << v1.getDistance() << "km / " << v1.getExecutionTime() << "hours\n";
	
	
	float s, d;
	char vN[10];
	char vNewN[10];
	char ans;
	while(1)
	{
		cout << "For new vehicle enter a name, speed and passed distance\n";
		cin >> vN >> s >> d;
		vehicle v(vN,s,d);
		if (v.getSpeed()==-1) 
		{
			cout << "Try again\n";
			continue;
		}
		cout << "Current vehicle: " << v.getName() << " / " << v.getSpeed() << "km/h / " << v.getDistance() << "km / " << v.getExecutionTime() << "hours\n";
		cout << "Would you like to change a name? Y/N\n";
		cin >> ans;
		if (ans =='Y'|| ans == 'y')
		{
			cout << "Enter a new name\n";
			cin >> vNewN;
			v.setVName(vNewN);
			cout << "Vehicle info: " << v.getName() << " / " << v.getSpeed() << "km/h / " << v.getDistance() << "km / " << v.getExecutionTime() << "hours\n";
		}
		else if (ans == 'N'|| ans == 'n') { continue; }
		else 
		{ 
			cout << "Incorrect answear\n";
			break;
		}
			
	}

	system("pause");
	return 0;
}