#include<iostream>
#include <istream>
#include<cstring>
using namespace std;

class point {
public: int x, y;
		point(int x0 = 0, int y0 = 0) : x(x0), y(y0) {}
		void prnt() { cout <<"x=" <<x << " / " <<"y="<< y << endl; }
};

class circle: public virtual point {
public: int r;
		circle(int x0 = 0, int y0 = 0, int r0 = 0) : point(x0, y0) { r=r0; }
		void prnt() { 
			point::prnt();
			cout <<" / "<<"r="<< r  << endl;
		}
};

class ellipse : public virtual point {
public: int r1, r2;
		ellipse(int x0 = 0, int y0 = 0, int r01 = 0, int r02=0) : point(x0, y0) 
		{ 
			r1 = r01; 
			r2 = r02;
		}
		void prnt() {
			point::prnt();
			cout <<"r1="<< r1<<" / "<<"r2="<<r2 << endl;
		}
};

class eye : public circle, public ellipse {
public: eye(int x0 = 0, int y0 = 0, int r01 = 0, int r02 = 0) :circle(x0, y0, r01) , ellipse(x0, y0, r01, r02),point(x0,y0) {}
	void prnt() { 
		ellipse::prnt();
		cout << x <<" / " << y << endl; 
	}
};

/*int main()
{
	eye e(1,2,3,4);
	e.prnt();
	system("pause");
	return 0;
}*/