#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &c);
int timsonho2(int a,int b, int c);
void xuat(int kq);

int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=timsonho2(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}
int timsonho2(int a,int b, int c)
{
	int max;
	if ( ((a>b) && (a<c)) || ((a<b) && (a>c)) )
	{
		max=a;
	}
	else if ( ((b>a) && (b<c)) || ((b<a) && (b>c)) )
	{
		max=b;
	}
	else 
	{
		max=c;
	}
	return max;
}
void xuat(int kq)
{
	cout<<kq;
}
