/*
СР6-1
	5.
		1. Создать два класса: 1) окружность, 2) точка на плоскости, 
		определить дружественную функцию вхождения точки на плоскости в окружность.
		2. Добавить класс «квадрат», 
		создать для класса «окружность» и класса «квадрат» дружественные функции определения того, 
		может ли окружность быть вписанной или описанной для квадрата.


*/
#include <iostream>
#include <string>

using namespace std;
class point;
class square;
class circle{
	double x,y,r;
	public: circle(double x0=0, double y0=0,double r0=0):x(x0),y(y0),r(r0){}	
	friend bool isPntInsideCrcle(point*,circle*);
	friend bool isCrcleScribedSqr(circle*,square*);
	~circle(){}
};
class point{
	double x,y;
	public: point(double x0=0, double y0=0):x(0),y(y0){}	
	friend bool isPntInsideCrcle(point*,circle*);
	~point(){}
};
class square {
	double x, y, a;
	public: square(double x0=0, double y0 = 0, double a0 = 0):x(x0),y(y0),a(a0){}
			friend bool isCrcleScribedSqr(circle*,square*);
};

bool isPntInsideCrcle(point* pP, circle* pC)
{
	double xp, yp, xc, yc, rc, defXY;
	xp=pP->x;
	yp=pP->y;
	xc=pC->x;
	yc=pC->y;
	rc=pC->r;
	defXY=(xp-xc)*(xp-xc)+(yp-yc)*(yp-yc);
	return (defXY<=rc*rc)?true:false;
}

bool isCrcleScribedSqr(circle* pC,square* pS )
{
	double xS, yS, aS, xc, yc, rc, diagS;
	xS = pS->x;
	yS = pS->y;
	aS = pS->a;
	xc = pC->x;
	yc = pC->y;
	rc = pC->r;
	return (xS == xc && yS == yc && (rc == aS / 2 || rc == aS / sqrt(2))) ? true : false;
}

int main()
{
	circle C(5,5,2.5);
	point P;
	square S(5, 5, 15);
	string ans;
	ans=isPntInsideCrcle(&P,&C)?("inside"):("out");
	cout<<"The point is "<<ans <<" the circle."<<endl;
	ans=isCrcleScribedSqr(&C,&S) ? ("incscribed or circumscribed to") : ("intersects or has no common points with");
	cout << "The square is " << ans << " a circle." << endl;
	system("pause");	
	return 0;
}