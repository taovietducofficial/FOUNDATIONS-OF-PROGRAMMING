// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 1: Nhập vào 1 số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap
bool chinhphuong(int n); // khai bao ham kiem tra so chinh phuong
void xuat(int kq); // khai bao ham xuat

int main() // ham main
{
	int n; // khai bao bien n
	nhap(n); // nhap n
	bool kq=chinhphuong(n); // gan kq bang ket qua kiem tra so chinh phuong
	xuat(kq); // xuat ket qua
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap
{
	cin>>n;
}
bool chinhphuong(int n) // dinh nghia ham kiem tra so chinh phuong
{
	if(n<1) // neu n<1 thi tra ve false
		return false; 
	else
		for(int i=1;i*i<=n;i++) // duyet tu 1 den can bac 2 cua n
			if (i*i==n)	 // neu i*i=n thi tra ve true
				return true;
	return false;
}
void xuat(int kq) // dinh nghia ham xuat
{ 
	if (kq) // neu kq=true thi in ra la so chinh phuong
	{
		cout<<"LA SO CHINH PHUONG";
	}
	else  // nguoc lai in ra khong la so chinh phuong
	{
		cout<<"KHONG LA SO CHINH PHUONG";
	}
}
