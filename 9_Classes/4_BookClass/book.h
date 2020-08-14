#include <iostream>
using namespace std;

class book {   
	char* title;
	char* author;
	int year;
	public: book(char t[] = (char*)"defaultT", char au[] = (char*)"defaultA", int y = 0);
	void output() { cout << title<< " / " << author << " / " << year << endl; }
	~book();
	
};
