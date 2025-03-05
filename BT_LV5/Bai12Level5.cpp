#include <iostream>
using namespace std;

void nhap(int&n);
void xuat(float kq);
int tinhtongnso(int n);
int giaithua(int n);
float tinhS(int n);

int main()
{
	int n;
	nhap(n);
	float kq=tinhS(n);
	xuat(kq);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
void xuat(float kq)
{
	cout<<kq;
}
int tinhtongnso(int n)
{
	float a=0;
	for (int i=1;i<=n;i++)
	{
		a=a+i;
	}
	return a;
}
int giaithua(int n)
{
	int a=1;
	for (int i=1;i<=n;i++)
	{
		a=a*i;
	}
	return a;
}
float tinhS(int n)
{
	float S=0.0;
	for (int i=1;i<=n;i++)
	{
		S=(S+(float)tinhtongnso(i)/giaithua(i));
	}
	return S;
}
