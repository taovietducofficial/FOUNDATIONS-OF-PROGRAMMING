// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 1 số thực a. Làm tròn số a thành số nguyên gần nhất.

#include <iostream>
using namespace std;

void nhap(double &a); // khai bao ham nhap a tu ban phim
int ktra(double a); // khai bao ham kiem tra so nguyen gan nhat
void xuat(double kq);  // khai bao ham xuat kq

int main()
{
	double a; // khai bao bien a
	nhap(a); // nhap a tu ban phim
	int kq=ktra(a); // gan kq = ket qua ham ktra
	xuat (kq); // xuat ket qua
	return 0;
}

void nhap(double &a) // dinh nghia ham nhap a tu ban phim
{
	cin>>a;
}

int ktra(double a) // dinh nghia ham kiem tra so nguyen gan nhat
{ 
	int t = (int)a;
	if ((a==t) || (a<0))  // neu a la so nguyen hoac a < 0
	{
		return t; // tra ve t
	}
	else if (a>0) // neu a > 0
	{
		t=t+1; // tang t len 1 
	} 
	return t;
}

void xuat(int kq) // dinh nghia ham xuat kq
{
	cout<<kq;
}
