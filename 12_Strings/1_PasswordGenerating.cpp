/*
ЛР15
8.	Задание. Написать программу генерации пароля. Пароль имеет длину 12 символов и состоит из цифр и больших букв английского алфавита. (ABCDEFGHIJKLMNOPQRSTUVWXYZ). Нужно задать массив допустимых символов и при помощи генератора случайных чисел выбрать из него 12 символов пароля. Вывести пароль на экран.
*/
#include <iostream>
#include <time.h>

int main()
{
	char s[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int lenS=strlen(s);
	srand(time(0));
	char pass12[12];
	int jC;
	for (int i=0; i<12; i++)
	{
		jC=rand()%lenS;
		pass12[i]=s[jC];
		}
	

		printf("Password: %s\n",pass12);
	
	system("pause");
	return 0;
}


