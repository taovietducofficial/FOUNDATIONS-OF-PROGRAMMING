// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 4: Nhập vào 1 số nguyên dương n. Liệt kê các số chính phương từ 1 đến n.

#include <iostream>
using namespace std;

void nhap(int &n); // nhap so nguyen duong n
void xuat(int a); // xuat so nguyen duong a
void lietkecp(int n); // liet ke cac so chinh phuong tu 1
bool chinhphuong(int n); // kiem tra so chinh phuong

int main() 
{
	int n; // khai bao bien n
	nhap(n); // nhap so nguyen duong n
	lietkecp(n); // liet ke cac so chinh phuong tu 1
	return 0;
}
void nhap(int &n) // nhap so nguyen duong n
{
	cin>>n;
}
void xuat(int a) // xuat so nguyen duong a
{
	cout<<a<<" ";
}
void lietkecp(int n) // liet ke cac so chinh phuong tu 1
{
	for (int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if (chinhphuong(i)) // neu i la so chinh phuong thi xuat i
		{
			xuat(i);
		}
	}
}
bool chinhphuong(int n) // kiem tra so chinh phuong
{
	if(n<1) // neu n<1 thi khong phai so chinh phuong
	{
		return false;
	}
	int i=1;
	while (i*i<=n) // duyet tu 1 den can bac 2 cua n
	{
		if (i*i==n) // neu i*i=n thi la so chinh phuong
		{	
			return true; // la so chinh phuong
		}
		i++; // tang i len 1
	}
	return false;
}
