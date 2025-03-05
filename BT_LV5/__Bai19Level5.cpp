#include <iostream>
using namespace std;

void nhap(int&d,int&m,int&y);
void xuat(bool co,int songay);
bool namnhuan(int y);
bool hople(int d,int m,int y);
int lasongay(int m,int y);
void traodoi(int&a,int&b);
bool tinhngay(int d1,int m1,int y1,int d2,int m2,int y2,int&songay);

int main()
{
	int d1,m1,y1,d2,m2,y2,songay;
	nhap(d1,m1,y1);
	nhap(d2,m2,y2);
	bool co=tinhngay(d1,m1,y1,d2,m2,y2,songay);
	xuat(co,songay);
	return 0;
}

void nhap(int&d,int&m,int&y)
{
	cin>>d>>m>>y;
}

void xuat(bool co,int songay)
{
	if (co)
	{
		cout<<songay;
	}
	else 
	{
		cout<<"BO SO NHAP VAO KHONG HOP LE";
	}
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

bool hople(int d,int m,int y)
{
	if(d>0 && m>0 && y>0 && m<=12 && d<=(lasongay(m,y)))
		return true;
	else
		return false;
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

void traodoi(int&a,int&b) 
{
	int c; 
	c=a; 
	a=b; 
	b=c; 
}

bool tinhngay(int d1,int m1,int y1,int d2,int m2,int y2,int&songay)
{
	songay=0;
	if (hople(d1,m1,y1) && hople(d2,m2,y2))
	{
		if (y1>y2)    
		{
			traodoi(d1,d2);
			traodoi(m1,m2);
			traodoi(y1,y2);
		}
		
		if (y1==y2)
		{
			if (m1==m2)
			{
				if (d2<d1)
					traodoi(d2,d1);
				songay=d2-d1;
			}
			else 
			{
				if (m2<m1)
					traodoi(m1,m2);
				for(int i=m1;i<m2;i++)
				{
					songay=songay+lasongay(i,y1);
				}
				songay=songay+(lasongay(m1,y1)-d1)+d2-lasongay(m1,y1);
			}
		}
		else  
		{
			int a=y1+1; 
			if (a!=y2)
			{
				for (int i=a;i<y2;i++)
				{
					if (namnhuan(i))
					{
						songay=songay+366;
					}
					else
					{
						songay=songay+365;
					}
				}
			}
			for (int i=1;i<m2;i++) 
			{
				songay=songay+lasongay(i,y2); 
			}
			songay=songay+d2;  
			for (int i=12;i>m1;i--)
			{
				songay=songay+lasongay(i,y1); 
			}
			songay=songay+(lasongay(m1,y1))-d1; 
			return true;
		}
	}
		else
			return false;
}
