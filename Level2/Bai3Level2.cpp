// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 3: Nhập vào 3 số nguyên a,b,c. Tìm số nhỏ nhất trong 3 số đó.

#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &c); // khai bao ham nhap a,b,c 
int timmin(int a,int b, int c); // khai bao ham tim min 
void xuat(int kq); // khai bao ham xuat kq

int main() 
{
	int a,b,c; // khai bao bien a,b,c
	nhap(a,b,c); // nhap a,b,c tu ban phim
	int kq = timmin(a,b,c); // tim min cua a,b,c
	xuat(kq); // xuat ket qua
	return 0;
}
void nhap(int &a, int &b, int &c) // dinh nghia ham nhap a,b,c
{
	cin>>a>>b>>c;
}
int timmin(int a,int b, int c) // dinh nghia ham tim min
{
	int min=a; // gan min = a
	if (min>b) // neu min>b thi min=b
	{
		min = b;
	}
	if (min>c) // neu min>c thi min=c
	{
		min = c;
	}
	return min; 
}
void xuat(int kq)
{
	cout<<kq;
}
