// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 1 số thực a. Làm tròn số a.

#include <iostream>
#include <math.h>
using namespace std;

void nhap(float &a); // khai bao ham nhap a tu ban phim
int lamtron(float a); // khai bao ham lam tron so
void xuat(int kq); // khai bao ham xuat kq

int main ()
{
	float (a); // khai bao bien a la so thuc
	nhap(a); // nhap a tu ban phim
	int kq=lamtron(a); // gan kq = ket qua ham lamtron
	xuat(kq); // xuat ket qua
}

void nhap(float &a) // dinh nghia ham nhap a tu ban phim
{
	cin>>a; 
}

int lamtron(float a) // dinh nghia ham lam tron so
{
	int t=(int)a; // gan t = phan nguyen cua a
	float p=a-t; // gan p = phan thap phan cua a
	if (p>=0.5 | p<=-0.5) // neu p >= 0.5 hoac p <= -0.5
		t++; // tang t len 1
	return t;
}

void xuat(int kq) // dinh nghia ham xuat kq
{
	cout<<kq;
}
