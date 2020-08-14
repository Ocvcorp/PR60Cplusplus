
/*
ЛР16
12. Сформировать текстовый файл, содержащий информацию о марке компьютера, его тактовой частоте, объеме оперативной и внешней памяти. 
Создать второй файл, записав в него сведения о компьютерах, удовлетворяющих заданным требованиям (вводятся с клавиатуры).
*/
#include <fstream>
#include <iostream>
#include <string>


using namespace std;



struct CompParams
{
	string model="";
	int frequency=0; //MHz
	int ram=0; //Mb
	int hdd=0; //Gb
};

void addModel();
void alowableList();

int main()
{
	string addStatus;
	do
	{
		cout << "Please, make your choice: add or stop\n";
		cin >> addStatus;
		if (addStatus == "stop")
			break;
		else
			addModel();		
	} while (1);
	
	//creating a list with computers, that meet requrements
	alowableList();

	cout << "All computers from \"lr16_12_AllComputersList.txt\", \nthat meet requirements in accordance to \"lr16_12_Requirements.txt\"\nput into \"lr16_12_AllowedComputersList.txt\" \nProgramm completed\n" ;
	system("pause");
	return 0;
}

void addModel()
{
	CompParams cComp;
	cout << "Please, input  1)Model 2)CPU Frequency (MHz) 3)RAM memory (Mb) 4)HD memory(Gb)\n";
	cin >> cComp.model >> cComp.frequency >> cComp.ram >> cComp.hdd;
	if (cComp.model != ""&&cComp.frequency > 0 && cComp.ram > 0 && cComp.hdd > 0)
		{
			ofstream allCompsList;
			allCompsList.open("lr16_12_AllComputersList.txt", ios::app);
			allCompsList <<"\n"<< cComp.model << "\t" << cComp.frequency << "\t" << cComp.ram << "\t" << cComp.hdd  ;
			allCompsList.close();
			cout << "The informaion add successfully to \"lr16_12_AllComputersList.txt\"\n";
		}
	else
		cout << "Incorrect parameters. Can't be accepted...\n";
	
}

void alowableList()
{
	CompParams comparePs, currentPs;
	ifstream comparePsFile;
	comparePsFile.open("lr16_12_Requirements.txt");
	comparePsFile>>comparePs.model>>comparePs.frequency>>comparePs.ram>>comparePs.hdd;
	comparePsFile.close();
	
	ifstream listPsFile;
	ofstream allowedPsFile;
	listPsFile.open("lr16_12_AllComputersList.txt");
	allowedPsFile.open("lr16_12_AllowedComputersList.txt", ios::out);
	
	while (!listPsFile.eof())
	{
		listPsFile >> currentPs.model>> currentPs.frequency >> currentPs.ram >> currentPs.hdd;
		if (currentPs.frequency>= comparePs.frequency &&
			currentPs.ram >=comparePs.ram &&
			currentPs.hdd>= comparePs.hdd)
			allowedPsFile<< currentPs.model << "\t" << currentPs.frequency << "\t" << currentPs.ram << "\t" << currentPs.hdd<<"\n";
	}
	listPsFile.close();
	allowedPsFile.close();
	
}