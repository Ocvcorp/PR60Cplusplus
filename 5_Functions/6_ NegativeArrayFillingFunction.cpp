// lab6_5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

void soxran(float a[],int n,float* b,int *k);
void inputA(float *arr, int &n);
void outputA(float* arr, int n);
int main()
{ const int nn=25;
  float a[nn],b[nn];
  int m,l;
  setlocale (LC_ALL, "Rus");
  /* cout<<"������� ���������� ���������= ";
   cin>>m;
   cout<<endl;
   cout<<"������� �������� �������:  ";
  for (int i=0;i<m;i++)
	 cin>>a[i];
 */
  //m=0;
  inputA(a,m);
  soxran(a,m,b,&l);
  if (l==0) cout<<"������������� ��������� ���"<<endl;
  else
  {
	  outputA(b, l);
  }
  system("pause");
  return 0;
}
void soxran(float *a,int n,float b[],int *k)
{*k=0;
 for(int i=0;i<n;i++)
	 if (a[i]<0)
	 {b[*k]=a[i];
      (*k)++;
	 }
}
void inputA(float *arr, int &n)
{
	cout<<"������� ���-�� ���������:\n";
	cin>>n;
	cout<<"������� ������\n";
	for (int i=0; i<n; i++)
	{
		cin>>arr[i];
	}	
}

void outputA(float* arr, int n){
	cout<<"������ �������������:"<<endl;
    for (int i=0;i<n;i++)
      cout<<arr[i]<<endl;
	
}
