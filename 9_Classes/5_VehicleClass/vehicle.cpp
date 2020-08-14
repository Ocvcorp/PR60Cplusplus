
#include "vehicle.h"



vehicle::vehicle(char n[], float s, float d)
{	
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	if (s <= MAX_SPEED && d <= MAX_DISTANCE)
	{
		speed = s;
		distance = d;
	}
	else
	{
		cout << "Exceeding of maximum speed or distance\n";
		speed = -1;
		distance = 0;
	}
}

void vehicle::setVName(char n[])
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

char* vehicle::getName()
{
	return name;
}

float vehicle::getSpeed()
{
	return speed;
}

float vehicle::getDistance()
{	
	return distance;
}

float vehicle::getExecutionTime()
{
	if (speed>0) return distance/speed;
	else
	{
		cout << "Static vehicle condition, can't calculate time\n";
		return -1;	
	}
	
}



vehicle::~vehicle()
{
	cout << "The vehicle " << name << " has utilized" << endl;
	delete[] name;

}
