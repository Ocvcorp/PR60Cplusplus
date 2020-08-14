 /*
7.	Создать структуру с полями: фамилия автора книги, название книги, номер шкафа, где хранится книга, номер полки, номер ряда на полке. 
Сформировать массив структур с информацией о книгах, хранящихся в заданном шкафу, и упорядочить их по возрастанию номера полки.
*/
#include<iostream>
#include<string>
#include <time.h>
#define N 35
using namespace std;


typedef struct {
	int number;
	int shell;
	int row;	
} board;

struct book
{
	char aSurname[20]="";
	char title[40]="";
	board bookB;
};
void addNumber099(char* , int , int );
void structsOutput(book* , int);

int main()
{
	srand(time(0));
	int nBooks = 15, nAuthors = 6, nBrds = 3, nShls = 4, nRws = 2;
	book books[N];
	//init
	for (int i = 0; i < nBooks; i++)
{
		strcpy(books[i].title, "BookTitle _");
		addNumber099(books[i].title, 40, i + 1);
		strcpy(books[i].aSurname, "Author _");
		addNumber099(books[i].aSurname, 20, rand() % nAuthors + 1);
		books[i].bookB.number = rand() % nBrds + 1;
		books[i].bookB.shell = rand() % nShls + 1;
		books[i].bookB.row = rand() % nRws + 1;

	}
	//output
	cout << "initial array of structures:\n";
	structsOutput(books, nBooks);


	//sort
	//1. by shells
	book buff;
	for (int i = 0; i < nBooks; i++)
	{
		for (int j = 0; j < nBooks - i-1; j++)
		{
			if (books[j].bookB.shell > books[j + 1].bookB.shell)
			{
				buff = books[j];
				books[j] = books[j + 1];
				books[j+1] = buff;
			}
		}
	}
for (int i = 0; i < nBooks; i++)
	{
		for (int j = 0; j < nBooks - i-1; j++)
		{
			if (books[j].bookB.number > books[j + 1].bookB.number)
			{
				buff = books[j];
				books[j] = books[j + 1];
				books[j+1] = buff;
			}
		}
	}

	//output
	cout << "sorted by board and shells:\n";
	structsOutput(books, nBooks);
	
	system("pause");
	
	return 0;
}

void addNumber099(char* str, int Nstr, int intN)//функция добавления до двузначного целого числа к тексту
{
	for (int i = 0; i < Nstr; i++)
	{

		if (str[i] == ' ' && (intN / 10) > 0)
		{
			str[i + 1] = intN/10 + '0';
			str[i + 2] = intN%10 + '0';
			str[i + 3] = '\0';
			break;
		}
		if (str[i] == ' ' && (intN / 10) == 0)
		{
			str[i + 1] = intN + '0';
			str[i + 2] = '\0';
			break;
		}
	}
}

void structsOutput(book* sBook, int n)
{
	//output
	for (int i = 0; i < n; i++)
	{
		cout << "Board(N/Shell/Row): " << (sBook[i].bookB.number) << "/" << (sBook[i].bookB.shell) << "/" << (sBook[i].bookB.row) << " | "
			 << "Book: " << (sBook[i].aSurname) << " / " << (sBook[i].title) << endl;
	}
}
