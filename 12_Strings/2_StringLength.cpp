/*
ЛР15
9. 
: int mlen(char t[]).
*/
#include <iostream>
#include <cstring>
int mlen(char t[]);

int main()
{
	char s[256];
	do {
		printf("Enter some symbols or \"Enter\" to exit:\n");
		gets(s);
		printf("Chars count: %i\n",mlen(s));
	}while (mlen(s)) ;	
	system("pause");
	return 0;
}

int mlen(char t[])
{
	int i = 0;
	while (t[i++]) {}
	return --i;
	
}
