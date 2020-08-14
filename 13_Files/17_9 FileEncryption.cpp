/*
�� 17
9.	����������� �����. ���������� ��������� ������� ������������� ���������� �����. 
��������
��������� ��� �����. ���� ���� ������� �������, ��������� ������. 
����� ����, ��� ������ �����, ������ ���� � �������� ���������� �������� ������������ ��� 
� ��������� ������ ������. 
����� ����, ��� ��������� ���� ��������� ����� ���������, ����� �������� ���� �� ����� 
������������ ����� � �������� ����� ���������� ����� �� ������� �����. 
��� ����� ����� ������������ �������:
fpos_t pos;
fgetpos(f,&pos); // ���������� ������� ������� � �����
fsetpos(f,&pos);  // ��������� ����� �� ���������� �������
����� ����� ���������� � ��������� ���������� �����.
��� ���� ����� ������������ ���� � �������� ����, ����� ������� ��������� �������� 
� ��������� ���������� � ��� �� �������.

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