/*
СР7-1
	2.
		1. Переопределить операцию [] для класса point таким образом, 
		чтобы применение данной операции к экземпляру данного класса 
		возвращало i-й элемент динамического массива coord.
*/
#include <iostream>
using namespace std;

class point{
	double* coord;
	int Nd;	
	public: point(int n, double* cArr )
	{
		Nd=n;
		coord = new double[Nd-1];
		for (int i=0; i<Nd; i++)
		{coord[i]=cArr[i];}
	}
		double operator [] (int i){return coord[i];}
		
};

int main()
{
	double arr[]={100,200,300};
	point p(3, arr);
	
	
	cout<<p[0]<<"/"<<p[1]<<"/"<<p[2]<<endl;
	
	system("pause");
	return 0;
}