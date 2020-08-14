/*
��17
7. �������� ���������, ������� ������������ ������� ��������� ���� 
��� ����� ������� � ��������� �����. 
��������� ������ ��� �������� �������� 256. ������ ���� �����������. 
�� ���� ������� �������� ������� ������� � ����������� ��� ��������. 
����� ����, ��� ���� ��������� ��������, ��������� ���������.
*/
#include <stdio.h>
#include <stdlib.h>

void catchEntries(char, int*, int);
void entriesOutput(int*, int);

int main()
{
	int mas[256];
	for (int i = 0; i < 256; i++)
		mas[i] = 0;

	FILE *f;
	fopen_s(&f,"lr17_7_TEXT.txt", "rb");
	char curSymbol;
	while (!feof(f))
	{
		fread_s(&curSymbol, 1, 1, 1, f);
		catchEntries(curSymbol,mas,256);
	}
	fclose(f);
	
	entriesOutput(mas, 256);
	
	printf("\nA programm finished. Press any button...");
	getchar();
	return 0;
}

void catchEntries(char charElmnt, int* arr, int elNum)
{
	for (int i = 0; i < elNum; i++)
	{
		if ((int)charElmnt == i)
			arr[i]++;
	}
}

void entriesOutput(int* arr, int elNum)
{
	for (int i = 0; i < elNum; i++)
	{
		printf("[%c]-%i  ", i, arr[i]);
		if ((i > 0) && (i % 10 == 0))
			printf("\n");
	}
}