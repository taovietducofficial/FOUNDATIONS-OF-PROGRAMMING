#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &c);
int timmin(int a,int b, int c);
void xuat(int kq);

int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq = timmin(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}
int timmin(int a,int b, int c)
{
	int min=a;
	if (min>b)
	{
		min = b;
	}
	if (min>c)
	{
		min = c;
	}
	return min;
}
void xuat(int kq)
{
	cout<<kq;
}
