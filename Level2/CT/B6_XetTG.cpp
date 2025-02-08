#include <iostream>
#include <math.h>
using namespace std;

void nhap(float &a, float &b, float &c);
float ktratg(float a, float b, float c);
int xettamgiac(float a, float b, float c);
void xuat(int kq);

int main()
{
	float a,b,c;
	nhap(a,b,c);
	int kq=xettamgiac(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(float &a, float &b, float &c)
{
	cin>>a>>b>>c;
}
float ktratg(float a, float b, float c)
{
	if ( (a>0) and (b>0) and (c>0) and  ( (a+b) > c ) and ( (a+c) > b ) and ( (b+c) > a ) )
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int xettamgiac(float a, float b, float c)
{
	if(ktratg(a,b,c)) 
	{
		if ((a==b) and (b==c))
		{
			return 1;
		}
		else if ( (a==b) or (b==c) or (a==c) )
		{
			if ( ( (a*a) + (b*b) == (c*c) ) or ( (a*a) + (c*c) == (b*b) ) or ( (b*b) + (c*c) == (a*a) ) )
			{
				return 2;
			}
			else 
			{
				return 3;
			}
		}
		else if ( ( (a*a) + (b*b) == (c*c) ) or ( (a*a) + (c*c) == (b*b) ) or ( (b*b) + (c*c) == (a*a) ) )
		{
			return 4;
		}
		else 
		{
			return 5;
		}
	}
	else 
	{
		return 0;
	}
}
void xuat(int kq)
{
	if (kq==0)
	{
		cout<<"KHONG HOP LE";
	}
	else if (kq==1)
	{
		cout<<"TAM GIAC DEU";
	}
	else if (kq==2)
	{
		cout<<"TAM GIAC VUONG CAN";
	}
	else if (kq==3)
	{
		cout<<"TAM GIAC CAN";
	}
	else if (kq==4)
	{
		cout<< "TAM GIAC VUONG";
	}
	else if (kq==5)
	{
		cout<< "TAM GIAC THUONG";
	}
}
