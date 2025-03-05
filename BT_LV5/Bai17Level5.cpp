#include <iostream>
using namespace std;

void nhap(int&d,int&m, int&y);
void xuat(bool kq,int songay);
bool namnhuan(int y);
int lasongay(int m,int y);
bool tinhngay(int d,int m, int y,int &songay);
bool hople(int d,int m,int y);


int main()
{
	int d,m,y,songay;
	nhap(d,m,y);
	bool kq=tinhngay(d,m,y,songay);
	xuat(kq,songay);
	return 0;
}

void nhap(int&d,int&m, int&y)
{
	cin>>d>>m>>y;
}

void xuat(bool kq,int songay)
{
	if (kq)
		cout<<songay;
	else 
		cout<<"BO SO KHONG HOP LE";
}

bool namnhuan(int y)
{
	if ( ( y%4==0 and y%100!=0 ) or y%400==0 )
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int lasongay(int m,int y)
{
	int songay;
	if  (m==2) 
	{
		if (namnhuan(y))
		{
			songay=29;
		}
		else
		{
			songay=28;
		}
	}
	else if ( (m==4) or (m==6) or (m==9) or (m==11) )
	{
		songay=30;
	}
	else 
	{
		songay=31;
	}
	return songay;
} 

bool hople(int d,int m,int y)
{
	if(d>0 && m>0 && y>0 && m<=12 && d<=(lasongay(m,y)))
		return true;
	else
		return false;
}

bool tinhngay(int d,int m, int y,int &songay)
{
	if (hople(d,m,y))
	{
		for (int i=1;i<m;i++)
		{
			songay=songay+lasongay(i,y);
		}
		songay=songay+d-1;
		return true;
	}
	else
	{
		return false;
	}
}
