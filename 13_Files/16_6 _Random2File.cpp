
/*
��16
6. ����� ��������� ���������� 100 ��������� ����� � ����� �� � ��������� ����, ��� � ������ �������. 
����� ����� ��������� �������� ����, ��������� ��� ��� ������, ������ ������ 
� ��������� �� � �������� ������, ��������� ������� n=atoi(s). 
����� ����� ������������ ��� ������ ������� feof(f)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//file creating
	srand(time(0));
	FILE *f;  
	fopen_s(&f,"lr16_6_text.txt", "w");
	int num;
	char strNum[10];
	for (int i = 0; i < 100; i++)
	{
		num = rand() % 100;
		_itoa_s(num, strNum, 10);
		fputs(strNum, f);
		if (i<99)
			fputc('\n', f);
	}
	fclose(f);
	
	//file reading
	fopen_s(&f, "lr16_6_text.txt", "r");
	char strF[10];
	int numF;
	int outputFlag = 1;
	while (!feof(f))
	{
		fgets(strF, 10, f);
		numF = atoi(strF);
		printf("%i", numF);
		if (outputFlag % 20)
			printf(" ");
		else
			printf("\n");
		outputFlag++;
	}
	fclose(f);
	printf("\nProgramm finished. Press any key...\n");
	getchar();
	return 0;
}
