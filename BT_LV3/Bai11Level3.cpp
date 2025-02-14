// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 11: Nhập vào 3 số nguyên dương a, b, n. Tính tổng các số chia hết cho a nhưng không chia hết cho b từ 1 đến n.

#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &n); // khai bao ham nhap so  a, b, n
int tinhtong(int a, int b, int n); 
// khai bao ham tinh tong cac so chia het cho a nhung khong chia het cho b
void xuat(int kq); // khai bao ham xuat so

int main()
{
	int a,b,n; // khai bao bien so
	nhap(a,b,n); // nhap so tu ban phim
	int kq=tinhtong(a,b,n); // tinh tong
	xuat(kq); // xuat so
	return 0;
}

void nhap(int &a, int &b, int &n) // dinh nghia ham nhap so
{
	cin>>a>>b>>n;
}

int tinhtong(int a, int b, int n) 
// dinh nghia ham tinh tong cac so chia het cho a nhung khong chia het cho b
{
	int tong=0; // khai bao bien tong
	for(int i=1;i<=n;i++) // tinh tong cac so chia het cho a nhung khong chia het cho b
	{
		if ( (i%a==0) && (i%b!=0) ) // neu i chia het cho a nhung khong chia het cho b
		{
			tong=tong+i; // cong don i vao tong
		}
	}
	return tong;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
