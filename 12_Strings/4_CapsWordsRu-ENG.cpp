
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 1000


void cyrCapsInputTranslate(char *);
void cyrCapsOutputRewind(char *);
void stringArrSortIncreaseOrder(char**, char* A[N], int s);


int main()
{
	
	char *str=new char[N*N];
	char *rusCaps = (char*)"¿¡¬√ƒ≈®∆«»… ÀÃÕŒœ–—“”‘’÷◊ÿŸ‹€⁄›ﬁﬂ";
	char *engCaps = (char*)"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	//char *strRus = new char[10000];

	
	
	gets_s(str,N*N);
	char *pC = NULL;
	char *context1 = NULL;
	char *words[N];
	char ** newWords;
	pC = strtok_s(str, " ", &context1);
	int fCount = 0;
	while (pC != NULL)
	{
		cyrCapsInputTranslate(pC);
		if (strspn(pC, engCaps)|| strspn(pC, rusCaps))
		{
			words[fCount] = pC;
			fCount++;
		}
		pC = strtok_s(NULL, " ", &context1);
		
	}
	
	//stringArrSortIncreaseOrder(newWords,words, fCount);
	
	
	int minInd;
	int buff;
	int minIndArr[N];
	for (int i = 0; i < fCount; i++) 
		minIndArr[i] = i;
	for (int i = 0; i < fCount; i++)
	{
		minInd = i;
		for (int j = i + 1; j < fCount; j++)
		{
			if (words[minIndArr[minInd]][0] > words[minIndArr[j]][0])
				minInd = j;
		}
		buff = minIndArr[minInd];
		minIndArr[minInd] = minIndArr[i];
		minIndArr[i] = buff;
	}
	
	newWords = new char *[fCount];
	for (int i = 0; i < fCount; i++)
	{		
		newWords[i] = new char[N];
		strcpy(newWords[i], words[minIndArr[i]]);
	}
	printf("Array before sorting:\n");
	for (int i = 0; i < fCount; i++)
	{
		cyrCapsOutputRewind(words[i]);
		printf("%s\n", words[i]);
	}



	printf("Sorted array:\n");
	for (int i = 0; i < fCount; i++)
	{
		cyrCapsOutputRewind(newWords[i]);
		printf("%s\n", newWords[i]);
	}

	printf("A program finished, push any button ...\n");
	getchar();
	return 0;
}


void cyrCapsInputTranslate(char *inputKyrCaps)
{
	for (int i = 0; inputKyrCaps[i] != '\0'; i++)
	{
		if (inputKyrCaps[i] >= -128 && inputKyrCaps[i] <= -81)
			inputKyrCaps[i] = (char)(64 + inputKyrCaps[i]);//[¿;∏)U(∏;Ô]
		else if (inputKyrCaps[i] <= -17 && inputKyrCaps[i] >= -32)
			inputKyrCaps[i] = (char)(16 + inputKyrCaps[i]);//[;ˇ]
		else if (inputKyrCaps[i] == -15) //∏
			inputKyrCaps[i] = (char)(-72);
		else if (inputKyrCaps[i] == -16) //®
			inputKyrCaps[i] = (char)(-88);
	}
}

void cyrCapsOutputRewind(char *inputKyrCaps)
{
	for (int i = 0; inputKyrCaps[i] != '\0'; i++)
	{
		if (inputKyrCaps[i] >= -64 && inputKyrCaps[i] <= -17)
			inputKyrCaps[i] = (char)(-64 + inputKyrCaps[i]);//[¿;∏)U(∏;Ô]
		else if (inputKyrCaps[i] >= -16 && inputKyrCaps[i] <= 0)
			inputKyrCaps[i] = (char)(-16 + inputKyrCaps[i]);//[;ˇ]
		else if (inputKyrCaps[i] == -72) 
			inputKyrCaps[i] = (char)(-15);//∏
		else if (inputKyrCaps[i] == -88) 
			inputKyrCaps[i] = (char)(-16);//®
	}
}

void stringArrSortIncreaseOrder(char** ss, char* A[N], int S)
{
	ss = new char *[S];
	int minInd;
	//char* swapCh;
	for (int i = 0; i < S; i++)
	{
		minInd = i;
		for (int j = i+1; j < S; j++)
		{
			if (A[minInd][0] > A[j][0])
				minInd = j;
		}
		
		/*if (minInd > i) {
			swapCh = new char[N];
			strcpy(swapCh, A[minInd]);

			delete[] A[minInd];
			A[minInd] = new char[N];
			strcpy(A[minInd], A[i]);

			delete[] A[i];
			A[i] = new char[N];		
			strcpy(A[i], swapCh);

			delete[] swapCh;
		}*/
		ss[i] = new char[N];
		strcpy(ss[i], A[minInd]);
	}
	
}
