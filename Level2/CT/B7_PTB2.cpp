#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &a, int &b, int &c);
int tinhnghiem(int a, int b, int c, float &x1, float &x2);
void xuat(int kq, float x1, float x2);

int main()
{
	int a,b,c;
	float x1,x2;
	nhap(a,b,c);
	int kq = tinhnghiem(a,b,c,x1,x2);
	xuat(kq,x1,x2);
	return 0;
}
void nhap(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}
int tinhnghiem(int a, int b, int c, float &x1, float &x2)
{
	float d;
	if (a!=0) 
	{
		d=(b*b-4*a*c);
		if (d==0)
		{
			x1=((-b)/2*a);
			return 1;
		}
		else if (d>0)
		{
			x1=((-b+sqrt(d))/(2*a));
			x2=((-b-sqrt(d))/(2*a));
			return 2;
		}
		else if (d<0)
		{
			return 0;
		}
	}
	else if (b!=0) 
	{
		x1=float(-c)/b;
		return 1;
	}
	else if (c!=0)
	{
		return 0;
	}
	else 
	{
		return 3;
	}
}
void xuat(int kq, float x1, float x2)
{
	if (kq==0)
	{
		cout<<"VO NGHIEM";
	}
	else if (kq==1)
	{
		cout<<x1;
	}
	else if (kq==2)
	{
		cout<<x1<<" "<<x2;
	}
	else 
	{
		cout<<"VO SO NGHIEM";
	}
}
