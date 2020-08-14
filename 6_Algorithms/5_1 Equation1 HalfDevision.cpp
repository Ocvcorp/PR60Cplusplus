//ЛР7 Задание1
/*
2. Метод половинного деления.
X=(X-0,1)4 +0,1
ε =10-3 
вводить xR и xL в окрестностях x1=0.1(один корень) и x2=1.1(второй корень)
*/
#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	
	double xR, fXR, fXdev2 ,xL, fXL, eps=1e-3;
	int nIters=0;
	cout<<"Реализация метода половинного деления\n";
	//запрос на ввод
	cout<<"Введите левую и правую границы интервала поиска корня\n";
	cin>>xR>>xL;
	fXR=pow(xR-.1,4)-xR+.1;
	fXL=pow(xL-.1,4)-xL+.1;
	if (fXR*fXL<0)
	{
		while (abs(xR-xL)>eps) {
			fXdev2=pow(xR/2+xL/2-.1,4)-xR/2-xL/2+.1;
			if (fXdev2*fXL>0){
				xL=(xR+xL)/2;
				fXL=fXdev2;
			}
			else
			{
				xR=(xR+xL)/2;
				fXR=fXdev2;
				}
			nIters++;
		} 
		//вывод корня
		cout<<"Один из корней: "<<xR<<endl;
		cout<<"получен за "<<nIters<<" итераций. \n";
	}
	else
	{
		cout<<"Корень за пределами интервала.\n";
	}
		
	
	
	
	system("pause");
	return 0;
}