/*
ЛР15
16. Найти в строке самое короткое и самое длинное слова, в которых нет повторяющихся букв.
*/
#include "stdio.h"
#include "string.h"
#define N 1000

bool isAnySymbolRepeated(char*);
int main()
{
	//input
	char str[N];	
	printf("Enter some words:\n");
	gets_s(str,N);
	//getting word array 
	char* words[N];
	char* context = NULL;
	char* pC=strtok_s(str, " ", &context);
	int wCount=0;
	while(pC!=0)
	{
		words[wCount++]=pC;
		pC=strtok_s(NULL," ", &context);
	}
	
	//searching
	int iMaxLength=-1,
		iMinLength=-1;
	if (wCount > 1) 
	{
		iMaxLength = 0;
		iMinLength = 0;
		for (int i = 1; i < wCount; i++)
		{
			if (isAnySymbolRepeated(words[i]))
			{
				if (strlen(words[iMaxLength]) < strlen(words[i])) iMaxLength = i;
				if (strlen(words[iMinLength]) > strlen(words[i])) iMinLength = i;
			}

		}
	}
	else
	{
		if (isAnySymbolRepeated(words[0])) {
			iMaxLength = 0;
			iMinLength = 0;
		}
	}
	
	//output
	if (iMaxLength > -1) 
		{
			printf("The shortest word with no repeating is %s;\n the longest is %s\n", words[iMinLength], words[iMaxLength]);
		}
	else
		printf("There is no word matching\n");
	getchar();
	return 0;
}

bool isAnySymbolRepeated(char* word)
{
	int wordL = strlen(word);
	for (int i = 0; i < wordL; i++)
	{
		for (int j=0; j< i; j++)
			if (word[j] == word[i]) return false;
	}
	return true;
}

