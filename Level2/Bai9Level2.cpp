// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 9: Nhập vào 3 số nguyên. Tìm số nhỏ thứ 2. 

#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &c); // khai bao ham nhap so 
int timsonho2(int a,int b, int c); // khai bao ham tim so nho thu 2
void xuat(int kq); // khai bao ham xuat so

int main()
{
	int a,b,c; // khai bao bien so
	nhap(a,b,c); // nhap so tu ban phim
	int kq=timsonho2(a,b,c); // tim so nho thu 2
	xuat(kq); // xuat so
	return 0;
}

void nhap(int &a, int &b, int &c) // dinh nghia ham nhap so
{
	cin>>a>>b>>c; // nhap 3 so tu ban phim
}

int timsonho2(int a,int b, int c) // dinh nghia ham tim so nho thu 2
{
	int max;
	if ( ((a>b) && (a<c)) || ((a<b) && (a>c)) ) // a la so nho thu 2
	{
		max=a;
	}
	else if ( ((b>a) && (b<c)) || ((b<a) && (b>c)) ) // b la so nho thu 2
	{
		max=b;
	}
	else // c la so nho thu 2
	{
		max=c; 
	}
	return max;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
