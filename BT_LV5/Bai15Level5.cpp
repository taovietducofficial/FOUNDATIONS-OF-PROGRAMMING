#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n, float &x);
void xuat(float kq);
float tinhcannlan(int n, float x);

int main()
{
	int n;
	float x;
	nhap(n,x);
	float kq=tinhcannlan(n,x);
	xuat(kq);
	return 0;
}
void nhap(int &n, float &x)
{
	cin>>n>>x;
}
void xuat(float kq)
{
	cout<<kq;
}
float tinhcannlan(int n, float x)
{
	float S=0.0;
	for(int i=1;i<=n;i++)
	{
		S=sqrt(x+S);
	}
	return S;
}
