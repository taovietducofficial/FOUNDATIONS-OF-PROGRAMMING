// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 2: Nhập vào 1 số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so nguyen n
void xuat (int kq); // khai bao ham xuat ket qua
bool nguyento(int n); // khai bao ham kiem tra so nguyen to

int main()
{
	int n; // khai bao bien n
	nhap(n); // nhap n
	bool kq=nguyento(n); // gan kq bang ket qua kiem tra so nguyen to
	xuat(kq); // xuat ket qua
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap so nguyen n
{
	cin>>n;
}
void xuat (int kq) // dinh nghia ham xuat ket qua
{
	if (kq) // neu kq=true thi in ra la so nguyen to
	{
		cout<<"LA SO NGUYEN TO";
	}
	else // nguoc lai in ra khong la so nguyen to
	{
		cout<<"KHONG LA SO NGUYEN TO";
	}
}
bool nguyento(int n) // dinh nghia ham kiem tra so nguyen to
{
	int dem=0; // khai bao bien dem
	for(int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if(n%i==0) // neu n chia het cho i thi tang bien dem len 1
		{
			dem++; 
		}
	}
	if (dem==2) // neu dem=2 thi tra ve true
	{
		return true;
	}
	else // nguoc lai tra ve false
	{
		return false;
	}
}

