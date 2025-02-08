#include <iostream>
using namespace std;

void nhap(int &so);
void xuat(int so);

int main()
{
	int so;
	nhap(so);
	xuat(so);
	return 0;
}
void nhap(int &so)
{
	cin>>so;
}
void xuat(int so)
{
	if (so==0)
	{
		cout<<"KHONG";
	}
	else if (so==1)
	{
		cout<<"MOT";
	}
	else if (so==2)
	{
		cout<<"HAI";
	}
	else if (so==3)
	{
		cout<<"BA";
	}
	else if (so==4)
	{
		cout<<"BON";
	}
	else if (so==5)
	{
		cout<<"NAM";
	}
	else if (so==6)
	{
		cout<<"SAU";
	}
	else if (so==7)
	{
		cout<<"BAY";
	}
	else if (so==8)
	{
		cout<<"TAM";
	}
	else if (so==9)
	{
		cout<<"CHIN";
	}
	else 
	{
		cout<<"KHONG BIET VIET";
	}
}
