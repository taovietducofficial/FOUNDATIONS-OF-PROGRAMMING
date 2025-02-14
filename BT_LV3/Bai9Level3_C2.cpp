// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 9: Nhập vào 2 số nguyên dương a, b. Tìm ước chung lớn nhất của a và b.

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
	while (a!=b) // tinh uoc chung lon nhat cua a va b
	{
		if (a>b) // neu a lon hon b
		{
			a=a-b; // tru b khoi a
		}
		else if (a<b) // neu a nho hon b
		{
			b=b-a; // tru a khoi b
		}
	}
	return a;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
