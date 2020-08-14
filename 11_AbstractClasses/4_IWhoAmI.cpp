/*
ЛР14
10.	Задание. 
Создать абстрактный базовый класс "IWhoAmI" с чистой функцией Iam()
, от которого производным будет класс "ФИО", содержащий 
конструктор, 
деструктор, 
поля "имя" и "возраст", 
методы ввода возраста, имени, 
получения возраста и имени. 
Создать класс "Человек", производный от класса "ФИО", 
с конструктором, 
деструктором, 
методом ввода номера паспорта, методом получения номера паспорта 
и с пустой виртуальной функцией Iam(), которая будет выводить на экран надпись "I am an object", 
от которого создать производные классы "Студент", "Пенсионер". 
Для этих производных классов сделать базовый класс "Человек" – виртуальным. 
Создать производный класс "Сотрудник", для которого базовыми классами будут  "Студент" и "Пенсионер". 
Для каждого из производных классов функция  Iam() будет выводить разные надписи:  
"Я студент", "Я сотрудник", "Я пенсионер". 
В функции void main() обеспечить выбор создания и вывода объекта того или иного класса 
и обеспечить выполнение функции Iam() для выбранного класса.

*/


#include<iostream>
#include <istream>
#include<cstring>
using namespace std;

class IWhoAmI 
{
	virtual void Iam()=0;
};

class FIO: public IWhoAmI
{
	char* name;
	int age;
	public: 
		FIO(char* n=(char*)"DefaultName", int ag=0)
		{
			name=new char[strlen(n)+1];
			strcpy_s(name, strlen(n) + 1,n);
			//strcpy(name,n);
			age=ag;
		}
		char* getName(){return name;}
		int getAge(){return age;}
		~FIO()
		{
			cout<<"A person "<<name<<" "<<age<<" years old deleted from list\n";
		}
	
};

class Man: public FIO
{
	int passportNumber;
	public: 
		Man(char* n=(char*)"DefaultManName", int ag=10,int pN=222222):FIO(n,ag){passportNumber=pN;}
		int getPassportNum(){return passportNumber;}
		virtual void Iam(){cout<<"I am an object\n";}
		~Man()
		{
			cout<<"A man with "<<passportNumber<< " excluded from group\n";			
		}
};

class Student:  public virtual Man
{
	public: Student(char* n=(char*)"DefaultStudentName", int ag=20,int pN=333333):Man(n,ag,pN){}
			void Iam(){cout<<"I am a student\n";}
	~Student(){cout<<"A student excluded from group\n";}
};

class Retiree:  public virtual Man
{
	public: Retiree(char* n=(char*)"DefaultStudentName", int ag=60,int pN=444444):Man(n,ag,pN){}
			void Iam(){cout<<"I am a retiree\n";}
	~Retiree(){cout<<"A retiree excluded from group\n";}
};

class CoWorker:  public Student, public Retiree
{
	public: CoWorker(char* n=(char*)"DefaultCo-WorkerName", int ag=40,int pN=555555): Student(n,ag,pN) , Retiree(n, ag, pN) , Man(n, ag, pN) {}
			void Iam(){cout<<"I am a co-worker\n";}
	~CoWorker(){cout<<"A co-worker excluded from group\n";}
};

void displayInfo(char* n, int a, int p)
{
	cout<<"Name: "<<n<<endl;
	cout<<"Age: "<<a<<endl;
	cout<<"Passport number: "<<p<<endl;
}

int main()
{
	unsigned int uChoice;
	cout<<"Choose a level: 1 - man, 2 - student, 3 - retiree, 4 - co-worker \n";
	cin>>uChoice;
	char lName[50];
	int lAge;
	int passNumber;
	cout<<"Enter a name, an age and a passport number\n";
	cin >> lName;
	cin>> lAge >> passNumber;
	cout<<"Level announcement: ";
	switch (uChoice)
	{	
		case 1: 
		{
			Man m(lName, lAge, passNumber);
			m.Iam();
			displayInfo(m.getName(), m.getAge(), m.getPassportNum());
			break;
			}
		case 2: {
			Student m(lName, lAge, passNumber);
			m.Iam();
			displayInfo(m.getName(), m.getAge(), m.getPassportNum());
			break;
		}
		case 3: {
			Retiree m(lName, lAge, passNumber);
			m.Iam();
			displayInfo(m.getName(), m.getAge(), m.getPassportNum());
			break;
		}
		case 4: {
			CoWorker m(lName, lAge, passNumber);
			m.Iam();
			displayInfo(m.getName(), m.getAge(), m.getPassportNum());
			break;
		}
		
		
	};
	
	
	system("pause");
	return 0;
}
