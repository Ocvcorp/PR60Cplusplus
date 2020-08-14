#include <iostream>
#include "book.h"
using namespace std;


book::book(char t[], char au[], int y)
{
	title = new char[strlen(t) + 1];
	strcpy_s(title, strlen(t) + 1, t);
	author = new char[strlen(au) + 1];
	strcpy_s(author, strlen(au) + 1, au);
	year = y;
}

book::~book()
{
		cout << "destructor " << title << " finished" << endl;
		delete[] title;
		delete[] author;

}

