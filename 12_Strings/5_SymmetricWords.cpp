/*
ЛР15
15. Подсчитать в строке количество симметричных слов из нескольких букв и вывести результат.
*/
#include "stdio.h"
#include "string.h"
#define N 1000
bool isSymWord(char*);
int main()
{
	char str[N];
	
	printf("Enter some words:\n");
	gets(str);
	
	char* words[N];
	char* pC=strtok(str, " ");
	int wCount=0;
	while(pC!=0)
	{
		words[wCount++]=pC;
		pC=strtok(NULL," ");
	}
	printf("Symmetric words list:\n");
	for (int i=0; i<wCount; i++)
	{
		if   ( isSymWord(words[i]))
		printf("%s\n",words[i]);
	}
	return 0;
}

bool isSymWord(char* someWord)
{
	int NChars=0;
	while(someWord[NChars++ ]!='\0'){}
	NChars--;
	for (int i=0;i<NChars/2;i++)
	{
		if (someWord[i]!=someWord[NChars-i-1]) return false;		
	}
	return true;
}