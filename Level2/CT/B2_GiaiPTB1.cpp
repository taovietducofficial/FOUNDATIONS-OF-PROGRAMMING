#include <iostream>
using namespace std;

void nhap(int &a, int &b);
int tinhnghiem(int a, int b, float &kq);
void xuat(int co, float thuong);

int main()
{
	int a,b;
	float thuong;
	nhap (a,b);
	int co=tinhnghiem(a,b,thuong);
	xuat(co,thuong);
	return 0;
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int tinhnghiem(int a, int b, float &thuong)
{
	if (a==0)
	{
		if(b==0)
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		thuong = float(-b)/a;
		return 1;
	}
}
void xuat(int co,float thuong)
{
	if (co==2)
	{
		cout<<"VO SO NGHIEM";
	}
	else if (co==0)
	{
		cout<<"VO NGHIEM";
	}
	else
	{
		cout<<thuong;
	}
}
