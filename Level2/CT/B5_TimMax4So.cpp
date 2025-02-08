#include <iostream>
using namespace std;

void nhap (float &a, float &b, float &c, float &d);
float timmax(float a, float b, float c, float d);
void xuat(float kq);

int main()
{
	float a,b,c,d;
	nhap (a,b,c,d);
	float kq = timmax(a,b,c,d);
	xuat(kq);
	return 0;
}
void nhap (float &a, float &b, float &c, float &d)
{
	cin>>a>>b>>c>>d;
}
float timmax(float a, float b, float c, float d)
{
	float max=a;
	if (max<b)
	{ 
		max=b;
	}
	if (max<c)
	{
		max=c;
	}
	if (max<d)
	{
		max=d;
	}
	return max;
}
void xuat(float kq)
{
	cout<<kq;
}
