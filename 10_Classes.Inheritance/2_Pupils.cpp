/*
СР7-1
	2.
		2. Создать класс учеников, имеющий поля char * name (имя класса), 
		int countScholar (количество учеников), int countStudy (количество предметов), 
		int * ages (возраст учеников), double ** marks (двумерный динамический массив оценок). 
		Добавить в класс переопределение оператора присваивания и конструктора копирования.
*/
#include <iostream>
using namespace std;

struct Pupils{
	static char* name;
	static int countScholar;
	static int countStudy;
	int currentCountScholar;
	int* ages;
	double** marks;
	
	Pupils(int age, int* ageMarks)//common constructor
	{
		countScholar++;
		currentCountScholar=countScholar;
		ages = new int[countScholar];
		ages[countScholar-1]=age;
		marks = new double*[countScholar];
			marks[countScholar-1]=new double[countStudy];
			for (int j=0; j<countStudy;j++)
			{
				marks[countScholar-1][j] = ageMarks[j];
			}
	}

	Pupils(int age, int* ageMarks, Pupils const & Ppls)//copy constructor
	{
		countScholar++;
		currentCountScholar=countScholar;
		ages = new int[countScholar];
		for (int i=0; i<countScholar-1; i++)
		{
			ages[i]=Ppls.ages[i];
		}
		marks = new double*[countScholar];
		for (int i=0; i<countScholar-1;i++)
		{
			marks[i]=new double[countStudy];
			for (int j=0; j<countStudy;j++)
			{
				marks[i][j] = Ppls.marks[i][j];
			}			
		}

			//common constructor part
			ages[countScholar-1]=age;
			marks[countScholar-1]=new double[countStudy];
			for (int j=0; j<countStudy;j++)
			{
				marks[countScholar-1][j] = ageMarks[j];
			}
	}
	
	Pupils & operator = (const Pupils & rPpl)
	{
		
		
		//<memory clearing>
		delete[] ages; 
		for (int i=0; i<currentCountScholar;i++)
		{
			delete[] marks[i];
		}
		delete[] marks;
		//</memory clearing>
		currentCountScholar=rPpl.currentCountScholar;
		ages = new int[currentCountScholar];
		for (int i=0; i<currentCountScholar; i++)
		{
			ages[i]=rPpl.ages[i];
		}
		marks = new double*[currentCountScholar];
		for (int i=0; i<currentCountScholar;i++)
		{
			marks[i]=new double[countStudy];
			for (int j=0; j<countStudy;j++)
			{
				marks[i][j] = rPpl.marks[i][j];
			}			
		}
		return *this;
	}
	
	friend ostream & operator << (ostream & out, Pupils ppl);
	
	~Pupils()
	{
		cout<<"Destructor\n";
		/*delete[] ages; 
		for (int i=0; i<currentCountScholar;i++)
		{
			delete[] marks[i];
		}
		delete[] marks;*/
	}
		
};

ostream & operator << (ostream & out, Pupils ppl)
	{
		out<<ppl.name<<"\nages/marks:\n";
		for (int i=0; i<ppl.currentCountScholar;i++)
		{
			out<<ppl.ages[i]<<" | ";
			for (int j=0; j<Pupils::countStudy;j++)
			{
				out<< ppl.marks[i][j]<<" ";
			}
			out<<endl;
		}
		out<<endl;
		return out;
	}

char* Pupils::name=(char*)"B_klass";
int Pupils::countScholar=0;
int Pupils::countStudy=4;

int main()
{
	int a1[]={3,3,3,3};
	Pupils p1(8,a1);
	cout<<"Before assignment:\n";
	cout<<"p1\n"<<p1;

	
	int a2[]={5,5,5,5};
	Pupils p2(9,a2,p1);
	cout<<"p2\n"<<p2;
	

	p1=p2;
	cout<<"After assignment:\n";
	cout<<"p1\n"<<p1;
	
	system("pause");
	return 0;
}