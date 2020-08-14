
#include <iostream>
#include <time.h>
using namespace std;

int midpoints()
{  
	union ud{
		double d;
		unsigned char u[8];
	}u1;
	union un{
		int n;
		unsigned char u[4];
	}u2;
	static int number=0; // 
	if(!number)number=(int)time( 0 );
	u1.d=(double)number;
	u1.d *= u1.d; // 
	for(int i=0; i<4; i++){
		u2.u[i]=u1.u[i+2];
	}
	number=u2.n;
	number=number & 0x7fffffff;//
	return number;
}

#define N 100000
int main(){
	int mas[N];
		for(int i=0; i<N; i++){
			mas[i]=midpoints();
			try{
			for (int j=0; j<i;j++){
			 if (mas[i]==mas[j]){
				 cout << "The number " << mas[j] << " was generated at " << j << "d iteration and was repeated (for checking repeated value: " << mas[i]<<")\n";
			  throw i-j;
			 }
			  }
			  }
			catch (int n)
			{cout<<"The repeating happend after " << n <<" iterations" << endl; break;}
		
		}
	system("pause");
	return 0;
}
