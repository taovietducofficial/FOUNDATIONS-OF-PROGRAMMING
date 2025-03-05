#include <iostream>
using namespace std;

void nhap(int &tien);
void xuat(int kq, int t100,int t50, int t20, int t10);
int tinhsoto(int tien,int &t100, int &t50, int &t20, int &t10);

int main()
{
	int tien,t100,t50,t20,t10;
	nhap(tien);
	int kq=tinhsoto(tien,t100,t50,t20,t10);
	xuat(kq,t100,t50,t20,t10);
	return 0;
}
void nhap(int &tien)
{
	cin>>tien;
}
void xuat(int kq, int t100,int t50, int t20, int t10)
{
	if(kq)
	{
		cout<<t100<<" "<<t50<<" "<<t20<<" "<<t10;	
	}
	else
		cout<<"SO TIEN KHONG HOP LE";
}
bool hople(int tien)
{
	if ((tien%10000==0) and (tien>10000))
		return true;
	else
		return false;
}
int tinhsoto(int tien,int &t100, int &t50, int &t20, int &t10)
{
	t100=0;
	t50=0;
	t20=0;
	t10=0;
	if (hople(tien))
	{
		if (tien/100000!=0)
		{
			t100=tien/100000;
			tien=tien-t100*100000;
		}
		if (tien/50000!=0)
		{
			t50=tien/50000;
			tien=tien-t100*50000;
		}
		if (tien/20000!=0)
		{
			t20=tien/20000;
			tien=tien-t100*20000;
		}
		if (tien/10000!=0)
		{
			t10=tien/10000;
			tien=tien-t100*10000;
		}
		return true;
	}
	else
		return false;
}
