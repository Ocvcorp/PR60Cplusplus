#include <iostream>
#include "book.h"
using namespace std;


int main()
{
	book b;
	b.output(); 
	
	book a((char*)"War", (char*)"Tolstoy", 1850);
	a.output(); 
	
	system("pause");
	return 0;
}