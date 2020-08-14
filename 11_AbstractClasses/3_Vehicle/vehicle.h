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

class coach :public vehicle
{
	public: coach(char* name, int hN, float s, float d);
	private: int horseNumber;
	public: int getHorseNumber();
	~coach();
};


class computer
{
public:static double DefaultTimeToBoot;
private: char* cmpModel;
protected: 	double baseTimeToBoot; //
public: computer(char* n = (char*)"DefaultModel", double b = DefaultTimeToBoot);
		double GetTimeToBoot();
		char* GetCModel();
		~computer();
};

class airplane : public vehicle, public computer
{
private: char* company;
public: airplane(char* n = (char*)"DefaultAirplaneName", char* c = (char*)"DefaultCompany",
	float s = 500, float d = 1000, char* cm = (char*)"DefaultAirplaneComputer",
	double bt = DefaultTimeToBoot);
		void ComputerUpdate(double);
		char* GetCompany();
		~airplane();
};


//vehicle.h ends