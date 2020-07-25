//ЛР3_1  Упражнение 2.
/*
2.	Дано натуральное число N. Вывести ближайшую к этому числу степень двойки, тройки и пятёрки.
*/
#include <iostream>
#include "math.h"
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int iNum, nPd, minP2, minP3, minP5, minD, def, i;
	bool isCRun;
	cout <<"Введите натуральное число"<< endl;
	cin >> iNum;
	if (iNum==1) cout<<"К 1 ближайшая степень 2, 3, 5 равна 0 "<<endl;
	else if (iNum>1){
		//ближайшая степень 2
		minD=iNum;
 	   i=1;
	    isCRun=true;
		do {
			nPd=pow(2,i);
			def=abs(iNum-nPd);
			if(def<=minD) {
				minD=def;
				minP2=i;
				}
			else isCRun=false;
			i++;
		}while (isCRun);
		cout<<"Ближайшая степень 2ки к "<<iNum<<" есть "<<minP2<<endl;
		//ближайшая степень 3
		minD=iNum;
 	   i=1;
	    isCRun=true;
		do {
			nPd=pow(3,i);
			def=abs(iNum-nPd);
			if(def<=minD) {
				minD=def;
				minP3=i;
				}
			else isCRun=false;
			i++;
		}while (isCRun);
		cout<<"Ближайшая степень 3ки к "<<iNum<<" есть "<<minP3<<endl;
		
		//ближайшая степень 5
		minD=iNum;
 	   i=1;
	    isCRun=true;
		do {
			nPd=pow(5,i);
			def=abs(iNum-nPd);
			if(def<=minD) {
				minD=def;
				minP5=i;
				}
			else isCRun=false;
			i++;
		}while (isCRun);
		cout<<"Ближайшая степень 5ки к "<<iNum<<" есть "<<minP5<<endl;
	}
		else
		cout<<"Неверный ввод\n";
	
	system("pause");
	return 0;
}