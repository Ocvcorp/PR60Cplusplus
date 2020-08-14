
/*
ЛР16
10. Программа принимает на вход файл City.txt, содержащий список центральных городов России. 
Названия городов читаются из массива, отображаются на монитор, после этого создаётся новый файл, 
куда выбранные названия пишутся по возрастанию.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 100

void stringSorting(char someArr[N][N], int);



int main()
{
	setlocale(LC_ALL, "Russian");
	//array filling
	FILE *f;
	char cities[N][N];
	fopen_s(&f,"lr16_10_City.txt", "r");
	int cInd = 0;
	while (!feof(f))
	{
		fgets(cities[cInd++], N, f);
	} 
	fclose(f);
	printf("...............Scanned city list..................\n");
	for (int i = 0; i < cInd ; i++)
	{
		printf("%s", cities[i]);
	}
	//sorting
	stringSorting(cities, cInd);
	//output
	FILE* fOut;
	fopen_s(&fOut, "lr16_10_Sorted_Cities.txt", "w");
	printf("\n\n\nA Sorted list created in \"lr16_10_Sorted_Cities.txt\"...........\n");
	
	for (int i = 0; i < cInd; i++)
	{
		fputs(cities[i], fOut);
	}
	fclose(fOut);
		
	printf("\nProgramm finished. Press any key...\n");
	getchar();
	return 0;
}

void stringSorting(char someArr[N][N], int fCount)
{
	int minInd = 0;
	char buff[N];
	for (int i = 0; i < fCount; i++)
	{
		minInd = i;
		for (int j = i + 1; j < fCount; j++)
		{
			if (strcmp(someArr[minInd], someArr[j])>0)
				minInd = j;
		}
		strcpy_s(buff, N, someArr[minInd]);
		strcpy_s(someArr[minInd], N, someArr[i]);
		strcpy_s(someArr[i], N, buff);

	}
}