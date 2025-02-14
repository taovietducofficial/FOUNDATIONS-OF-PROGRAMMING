// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 4: Nhập vào số nguyên dương n. Tính tích T = 1*2*3*...*n.


#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int tinhtich(int n); // khai bao ham tinh tich
void xuat(int kq); // khai bao ham xuat so

int main()
{
	int n; // khai bao bien so
	nhap(n); // nhap so tu ban phim
	int kq=tinhtich(n); // tinh tich
	xuat(kq); // xuat so
	return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
	cin>>n;
}
int tinhtich(int n) // dinh nghia ham tinh tich
{
	int s=1; // khai bao bien tich
	for (int i=1;i<=n;i=i+1) // tinh tich tu 1 den n
	{
		s=(s*i);
	}
	return s;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
