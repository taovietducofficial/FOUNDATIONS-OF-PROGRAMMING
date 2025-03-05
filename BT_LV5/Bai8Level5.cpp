// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 8: Nhập vào 1 số nguyên dương n. Tìm ước số lẻ lớn nhất của n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap  n
int timuocmax(int n); // khai bao ham tim uoc max
void xuat(int kq); // khai bao ham xuat kq

int main()
{
	int n;
	nhap(n);
	int kq=timuocmax(n);
	xuat(kq);
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap n
{
	cin>>n;
}
int timuocmax(int n) // dinh nghia ham tim uoc max
{
	int max; // khai bao bien max
	for(int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if ( (n%i==0) && (i%2!=0) ) // neu n chia het cho i va i la so le
		{
			max=i;
		}
	}
	return max; // tra ve max
}
void xuat(int kq) // dinh nghia ham xuat kq
{
	cout<<kq;
}
