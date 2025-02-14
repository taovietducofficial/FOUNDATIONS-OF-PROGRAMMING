// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 3: Nhập vào số nguyên dương n. Tính tổng S = 1 + 1/2 + 1/3 + ... + 1/n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
float tinhtongps(int n); // khai bao ham tinh tong phan so
void xuat(double kq); // khai bao ham xuat so

int main()
{
	int n; // khai bao bien so
	nhap(n); // nhap so tu ban phim
	float kq=tinhtongps(n); // tinh tong phan so
	xuat(kq); // xuat so
	return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
	cin>>n;
}

float tinhtongps(int n) // dinh nghia ham tinh tong phan so
{
	float s=0; // khai bao bien tong
	for (int i=1;i<=n;i=i+1) // tinh tong phan so tu 1 den n
	{
		s=(s+(float)1/i); // cong don phan so
	}
	return s;
}

void xuat(double kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
