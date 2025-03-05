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
		while((tien-100000)>=0)
		{
			t100=t100+1;
			tien=tien-100000;
		}
		while((tien-50000)>=0)
		{
			t50=t50+1;
			tien=tien-50000;
		}
		while((tien-20000)>=0)
		{
			t20=t20+1;
			tien=tien-20000;
		}
		while((tien-10000)>=0)
		{
			t10=t10+1;
			tien=tien-10000;
		}
		return true;
	}
	else
		return false;
}
