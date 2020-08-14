#include <iostream>
#include "vehicle.h"
using namespace std;



float vehicle::MAX_DISTANCE = 2000;
float vehicle::MAX_SPEED = 720;
float airplane:: MAX_FLY_TIME = 1;

int main()
{
	cout << "Car constructor: ";
	car v1((char*)"Auto", (char*)"BMW", 200, 10);
	cout << v1.getName() << " / " << v1.getModel()<<" / "<< v1.getSpeed() << "km/h / " << v1.getDistance() << "km / " << v1.getExecutionTime() << "hours\n";
	cout << "Airplane constructor: ";
	airplane v2((char*)"Plane", (char*)"S7", 600, 1000);
	cout << v2.getName() << " / " << v2.getCompany() << " / " << v2.getSpeed() << "km/h / " << v2.getDistance() << "km / " << v2.getExecutionTime() << "hours\n";
	v2.changeMaxFlyTime(2);
	airplane v3((char*)"Plane", (char*)"Aeroflot", 700, 1000);
	cout << v3.getName() << " / " << v3.getCompany() << " / " << v3.getSpeed() << "km/h / " << v3.getDistance() << "km / " << v3.getExecutionTime() << "hours\n";
	cout << "Coach constructor: ";
	coach v4((char*)"Troika", 3, 30, 1000);
	cout << v4.getName() << " / " << v4.getHorseNumber() << " horses / " << v4.getSpeed() << "km/h / " << v4.getDistance() << "km / " << v4.getExecutionTime() << "hours\n";
	system("pause");
	return 0;
	
}



