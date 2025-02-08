#include <iostream>
using namespace std;

void nhap(int &m,int &y);
bool namnhuan(int y);
int tinhngay(int m,int y);
void xuat(int kq);

int main()
{
	int m, y;
	nhap(m,y);
	int kq = tinhngay(m,y);
	xuat(kq);
	return 0;
}
void nhap(int &m,int &y)
{
	cin>>m>>y;
}
bool namnhuan(int y)
{
	if ( ( y%4==0 and y!=100 ) or y%400==0 )
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int tinhngay(int m,int y)
{
	int kq;
	if  (m==2) 
	{
		if (namnhuan(y))
		{
			kq=29;
		}
		else
		{
			kq=28;
		}
	}
	else if ( (m==4) or (m==6) or (m==9) or (m==11) )
	{
		kq=30;
	}
	else 
	{
		kq=31;
	}
	return kq;
}
void xuat(int kq)
{
	cout<<kq;
}
