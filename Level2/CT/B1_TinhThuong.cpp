#include <iostream>
using namespace std;

void nhap(int &a, int &b);
int tinhthuong(int a,int b, float &thuong);
void xuat(int b, float kq);

int main()
{
	int a,b;
	float thuong;
	nhap (a,b);
	int co=tinhthuong(a,b, thuong);
	xuat(co,thuong);
	return 0;
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int tinhthuong(int a,int b, float &thuong)
{
	if (b==0)
	{
		return 0;
	}
	else
	{
		thuong = float (a)/b;
		return 1;
	}
}
void xuat(int co, float thuong)
{
	if (co==0)
	{
		cout<<"KHONG CHIA DUOC";
	}
	else
	{
		cout<<thuong;
	}
}
