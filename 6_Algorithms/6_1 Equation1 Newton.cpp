//ЛР7 Задание1
/*
3. Метод касательных (Ньютона).
X=(X-0,1)4 +0,1
ε =10-3 
вводить x0 в окрестностях x1=0.1(один корень) и x2=1.1(второй корень)
*/
#include <iostream>
#include <locale>
#include <math.h>
#define PRINT(X) cout<<#X<<"="<<X<<endl;
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	
	double x0, x1, dx , fX, dF, ddF, eps=1e-3;
	int nIters=0;
	cout<<"Реализация метода касательных(Ньютона)\n";
	//запрос на ввод
	cout<<"Введите начальный аргумент x0\n";
	cin>>x0;
	do {
		fX=pow(x0-.1,4)-x0+.1;
		//PRINT(fX)
		ddF=12*(x0-.1)*(x0-.1);
		//PRINT(ddF)
			if (fX*ddF>0){
				dF=4*pow(x0-.1,3)-1;
				x1=x0-fX/dF;
				dx=x0-x1;
				x0=x1;
			}
			else
			{
				cout<<"Условие сходимости нарушено\n";
				break;
			}
		nIters++;			
		}
		while (abs(dx)>eps);

		//вывод корня
		cout<<"Один из корней: "<<x0<<endl;
		cout<<"получен за "<<nIters<<" итераций. \n";
	
	
	system("pause");
	return 0;
}