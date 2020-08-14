/*
ЛР 17
9.	Кодирование файла. Необходимо выполнить простую перекодировку указанного файла. 
Алгоритм
Запросить имя файла. Если файл удалось открыть, запросить пароль. 
После того, как пароль введён, читать файл и побайтно произвести операцию «исключающее или» 
с очередным байтом пароля. 
После того, как некоторый блок исходного файла обработан, нужно отмотать файл на длину 
прочитанного блока и записать новое содержимое блока на прежнее место. 
Для этого можно использовать функции:
fpos_t pos;
fgetpos(f,&pos); // Запоминаем текущую позицию в файле
fsetpos(f,&pos);  // Перемотка файла на сохранённую позицию
После этого переходить к обработке следующего блока.
Для того чтобы восстановить файл в исходном виде, нужно вызвать программу повторно 
и повторить перезапись с тем же паролем.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 25


int main()
{

char fileTXT[N], password[N], xorWord[N], fileChr;
int xWCount=strlen(password);

printf("Enter a filename: ");
gets(fileTXT);
	
FILE *f;
f=fopen(fileTXT,"rb+");
	
if (f)
{
    printf("Enter a password for encryption: ");
	gets(password);
	xWCount=strlen(password);
    fpos_t pos;
    int i;
    fgetpos(f,&pos);
    bool flag=true;
	while (flag)
	{
	    for (i=0; i<xWCount; i++)
		{
			if(fread(&fileChr,1,1,f))
			    xorWord[i]=fileChr^password[i];//byte XOR
			else
			    {
			        flag=false;
			        break;
			    }
		}
	    fsetpos(f,&pos);
	    for (int j=0; j<i;j++)
			    fwrite(&xorWord[j],1,1,f);
		fgetpos(f,&pos);
	}
	fclose(f);
	printf("\nEncrypted successfully!\n");
}
    else
		printf("Incorrect filename. Try another time\n");
printf("\nA programm finished. Press any button...");
getchar();
return 0;
}