/*
ЛР 15
10.	Задание. Создать массив с двойной индексацией. 
Ввести несколько слов в этот массив. 
Отсортировать методом поиска минимального элемента 
и используя стандартные функции работы со строками, 
вывести на консоль.
*/
#include <iostream>
#include <cstring>
#define N 256
#define M 3

int main()
{
	char seqs[M][N];
	//array input
	for (int i=0; i<M; i++)
	{
		printf("Input a word: ");
		gets(seqs[i]);		
	}

	//sorting
	int minInd;
	char swapCh[256];
	for (int i=0; i<M; i++)
	{
		minInd=i;
		for (int j=i; j<M; j++)
		{
			if (strcmp(seqs[minInd],seqs[j])>0)
			minInd=j;
		}
		strcpy(swapCh,seqs[minInd]);
		strcpy(seqs[minInd],seqs[i]);
		strcpy(seqs[i],swapCh);
	}
	//array output
	printf("Sorted array:\n");
	for (int i=0; i<M; i++)
	{
		printf("%s\n", seqs[i]);
	}
	
	system("pause");
	return 0;
}


