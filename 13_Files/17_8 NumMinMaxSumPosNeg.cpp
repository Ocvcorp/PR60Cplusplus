/*
ЛР17
8.	Создать бинарный файл, записав в него произвольные действительные числа. 
Затем на место максимального элемента записать сумму положительных элементов, 
а на место минимального элемента – сумму отрицательных элементов. 
(При поиске минимального и максимального элементов запоминается адрес этих элементов, 
т.е. смещение относительно начала файла. 
При записи на их места найденных сумм предварительно файловый указатель смещается на величину найденного смещения).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 25


int main()
{
	//array initialize
	float mas[N];
	srand(time(0));
		for (int i = 0; i < N; i++)
	{
		mas[i] = (float)(rand()%10)-5.3;
		//printf("%f  ", mas[i]);
	}
	
	//file writing
	FILE *f;
	fopen_s(&f,"lr17_8_FLOAT.txt", "wb");
	fwrite(&mas, 4,N, f);
	fclose(f);
	
	//file reading - arrayOutput
	FILE *f4;
	float mas3[N];
	fopen_s(&f4, "lr17_8_FLOAT.txt", "rb");
	fread_s(&mas3, 4 * N, 4, N, f4);
	printf("Initial array:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%.1f  ", mas3[i]);
	}

	fclose(f4);

	//file reading
	//min, max, sumPos, sumNeg
	FILE *f1;
	fopen_s(&f1,"lr17_8_FLOAT.txt","rb");
	float min = mas3[0], max = mas3[0], curNum,
		sumPos = 0, sumNeg = 0;	
	int posMin=0, posMax=0;
	for (int i=0; i<N; i++)
	{
		fseek(f1, 4*i, SEEK_SET);
		fread_s(&curNum,4,4,1,f1);
		if (curNum<min) {min=curNum; posMin=i*4;}
		if (curNum>max) {max=curNum; posMax=i*4;}
		if (curNum>0) sumPos+=curNum;	
		if (curNum<0) sumNeg+=curNum;
		/*if (mas[i]<min) mas[i]=min; 
		if (mas[i]>min) mas[i]=max;
		if (mas[i]>0) sumPos+=mas[i];	
		if (mas[i]<0) sumNeg+=mas[i];*/
	}

	fclose(f1);
	
	printf("\nSum of negative values is %.1f\n", sumNeg);
	printf("\nSum of positive values is %.1f\n", sumPos);

	//file changing content(max & min)
	FILE *f2;
	fopen_s(&f2, "lr17_8_FLOAT.txt", "rb+");
	fseek(f2, posMin,SEEK_SET);
	fwrite(&sumNeg, 4, 1, f2);
	
	fseek(f2, posMax, SEEK_SET);
	fwrite(&sumPos, 4, 1, f2);
	fclose(f2);
	
	//file reading - checking a result
	FILE *f3;
	float mas2[N];
	fopen_s(&f3, "lr17_8_FLOAT.txt", "rb");
	fread_s(&mas2, 4 * N, 4, N, f3);
	printf("\nArray modified from file:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%.1f  ", mas2[i]);
	}
	
	fclose(f3);
	
	
	
	
	
	
	
	printf("\nA programm finished. Press any button...");
	getchar();
	return 0;
}

