// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 1: Nhập vào số nguyên dương n. Tính tổng S = 1 + 2 + 3 + ... + n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so 
int tinhtong(int n);	// khai bao ham tinh tong
void xuat(int kq); // khai bao ham xuat so

int main()
{
	int n; // khai bao bien so
	nhap(n); // nhap so tu ban phim
	int kq=tinhtong(n); // tinh tong 
	xuat(kq);
	return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
	cin>>n;
}

int tinhtong(int n) // dinh nghia ham tinh tong
{
	int s=0; // khai bao bien tong
	for (int i=1;i<=n;i=i+1) // tinh tong tu 1 den n
	{
		s=(s+i); // cong don
	}
	return s;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
