//vehicle.h starts
#include <iostream>
using namespace std;
class vehicle {   
	public: static float MAX_DISTANCE;
	public: static float MAX_SPEED;
	private: char* name;
	float speed;
	float distance;
	float exTime;
	public: vehicle(char n[] = (char*)"defaultName", float s = 1, float d = 0);
	public: void setVName(char n[]);
	public: char* getName();
	public: float getSpeed();
	public: float getDistance();
	public: float getExecutionTime();

	~vehicle();
	
};

class car: public vehicle 
{
	public: car(char n[] = (char*)"defaultCarName", char m[] = (char*)"defaultModel", float s = 1, float d = 0);
	char* model;
	public: char* getModel();
	~car();
};

class airplane:public vehicle
{
	public: airplane(char n[] = (char*)"defaultAirplaneName", char m[] = (char*)"defaultCompany", float s = 1, float d = 0);
	public: static float MAX_FLY_TIME;
	private:	char * company;
	public: void changeMaxFlyTime(float mft);
			char* getCompany();
			~airplane();
};

class coach :public vehicle
{
	public: coach(char* name, int hN, float s, float d);
	private: int horseNumber;
	public: int getHorseNumber();
	~coach();
};

//vehicle.h ends