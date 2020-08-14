#include <iostream>
#include "vehicle.h"
using namespace std;

//vehicle.cpp begins

vehicle::vehicle(char n[], float s, float d)
{	
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	if (s> 0 && s <= MAX_SPEED && d <= MAX_DISTANCE)
	{
		speed = s;
		distance = d;
		exTime = d/s;
	}
	else
	{
		cout << "Incorrect speed or distance\n";
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

car::car(char n[],  char m[],  float s, float d):vehicle(n, s, d)
{
	
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

char *car:: getModel()
{
	return model;
}

car::~car() {
	cout << "A car " << model << " has utilized \n";
	delete[] model;
}

airplane::airplane(char n[], char m[], float s, float d) :vehicle(n, s, d)
{

	company = new char[strlen(m) + 1];
	strcpy_s(company, strlen(m) + 1, m);
	if (s != 0 && d / s >= MAX_FLY_TIME) cout << "Exceed maximum flytime\n";
}

void airplane::changeMaxFlyTime(float mft)
{
	MAX_FLY_TIME = mft;
	cout << "A company changes max fly time to " << MAX_FLY_TIME <<" hours" << endl;
}

char *airplane::getCompany()
{
	return company;
}

airplane::~airplane() {
	cout << "An airplane of " << company << " has utilized \n";
	delete[] company;
}

coach::coach(char* n, int hN, float s, float d):vehicle(n,s,d)
{
	horseNumber = hN;
}

int coach:: getHorseNumber()
{
	return horseNumber;
}

coach::~coach() 
{
	cout << "The coach with " << horseNumber << " horses has uformed\n ";
}

//vehicle.cpp ends