// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 10: Nhập vào 2 số nguyên dương a, b. Tìm ước chung lớn nhất của a và b.

#include <iostream>
using namespace std;

void nhap(int &a,int &b); // khai bao ham nhap so
int tinhucln(int a,int b); // khai bao ham tinh uoc chung lon nhat
void xuat(int kq); // khai bao ham xuat so

int main()
{
	int a,b; // khai bao bien so
	nhap(a,b); // nhap so tu ban phim
	int kq=tinhucln(a,b); // tinh uoc chung lon nhat
	xuat(kq); // xuat so
	return 0;
}

void nhap(int &a,int &b) // dinh nghia ham nhap so
{
	cin>>a>>b;
}

int tinhucln(int a,int b) // dinh nghia ham tinh uoc chung lon nhat
{
	int UCLN; // khai bao bien UCLN
	for(int i=1;i<=a;i++) // tim uoc chung lon nhat cua a va b
	{
		if ( (a%i==0) && (b%i==0) )  // neu a va b chia het cho i
		{
			UCLN=i; // gan i cho UCLN
		}
	}
	return UCLN;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
