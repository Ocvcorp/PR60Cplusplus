/*
ЛР13
8.	Задание. Создать класс point. 
В классе определить две координаты типа double пустой конструктор, конструктор с присваиванием. 
От этого класса создать производный класс complex. 
Для него создать конструктора, операции «+, -, *, /» 
с использованием указателя this в производном классе. 
И встроенную функцию печати. 
Проверить результат. 
*/
#include <iostream>
using namespace std;

class point
{
	protected: 
		double X, Y;
	public:
		point() 
		{
			X=1;Y=1;
			//cout << "class --point-- created with default values" << endl;
		}
		point(double Xi, double Yi)
		{ 
			X = Xi; Y = Yi; 
			//cout<< "class --point-- created " << endl; 
		}
		
	~point()
	{
		//cout << "class --point-- deleted" << endl;
	}
};

class complex: public point
{
	public: 
		complex():point()
		{ 
			//cout << "class --complex-- created with default values" << endl; 
		}
		complex(double A, double B):point()
		{
			X=A;Y=B;// cout << "class --complex-- created" << endl;
		}
		void printOut(){cout<<"Z="<<X<<"+"<<Y<<"*i"<<endl;}
		complex operator + (complex Z)
		{
			complex Z2;
			Z2.X = this->X + Z.X;
			Z2.Y = this->Y + Z.Y;
			return Z2;
		}
		complex operator - (complex Z)
		{
			complex Z2;
			Z2.X = this->X - Z.X;
			Z2.Y = this->Y - Z.Y;
			return Z2;
		}
		complex operator * (complex Z)
		{
			complex Z2;
			Z2.X = (this->X) * Z.X- (this->Y) * Z.Y;
			Z2.Y = (this->X) * Z.Y + (this->Y) * Z.X;
			return Z2;
		}
		complex operator / (complex Z)
		{
			complex Z2;
			Z2.X = ((this->X) * Z.Y + (this->Y) * Z.X)/
				(Z.X*Z.X +Z.Y*Z.Y);

			Z2.Y = ((this->Y) * Z.X- (this->X) * Z.Y) /
				(Z.X*Z.X + Z.Y*Z.Y);
			return Z2;
		}




		~complex()
		{
			//cout << "class --complex-- deleted" << endl;
		}
};

int main()
{
	complex z1(1,2), z2(3,4);

	cout << "z1+z2: "; (z1 + z2).printOut();
	cout << "z1-z2: "; (z1 - z2).printOut();
	cout << "z1*z2: "; (z1 * z2).printOut();
	cout << "z1/z2: "; (z1 / z2).printOut();
	system("pause");
	return 0;
}

