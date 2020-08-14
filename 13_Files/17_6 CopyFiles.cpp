#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Russian");
	FILE *f,*f1;
	char mas[19];
	fopen_s(&f,"lr17_6_TEXT.txt", "rb");
	fread_s(&mas, sizeof(mas), 1, 19, f);
	printf("%s\n", mas);
	fclose(f);
	fopen_s(&f1, "lr17_6_TEXT_1.txt", "wb");
	fwrite(&mas, 1, sizeof(mas), f1);
	fclose(f1);
	getchar();
	return 0;
}