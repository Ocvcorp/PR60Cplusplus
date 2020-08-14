#include <iostream>
using namespace std;

class vehicle {   
	public: static float MAX_DISTANCE;
	public: static float MAX_SPEED;
	char* name;
	float speed;
	float distance;
public: vehicle(char n[] = (char*)"defaultName", float s = 1, float d = 0);
	public: void setVName(char n[]);
	public: char* getName();
	public: float getSpeed();
	public: float getDistance();
	public: float getExecutionTime();

	~vehicle();
	
};
