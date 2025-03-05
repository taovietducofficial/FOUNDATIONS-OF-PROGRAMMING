#include <iostream>
using namespace std;

void nhap(int &n, float &x);
void xuat(int kq);
float tinhmu(float x,int n);
int giaithua(int n);
int tinhS(int n, float x);

int main()
{
	int n;
	float x,S;
	nhap(n,x);
	int kq=tinhS(n,x);
	xuat(kq);
	return 0;
}

void nhap(int &n, float &x)
{
	cin>>n>>x;
}

void xuat(int kq)
{
	cout<<kq;
}

float tinhmu(float x,int n)
{
	float a=x;
	if (n=0)
		a=1;
	for (int i=2;i<=n;i++)
	{
		a=a*x;
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

int tinhS(int n, float x)
{
	float S=tinhmu(x,n)/giaithua(n);
	return S;
}
