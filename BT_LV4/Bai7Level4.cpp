// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 7: Nhập vào 1 số nguyên dương n. Kiểm tra xem các chữ số của n có phải là số chẵn hay không?

#include <iostream>
using namespace std;

void nhap(int &n);	// khai bao ham nhap 
int xetchusochan(int n); // khai bao ham xetchusochan
void xuat(int kq); // khai bao ham xuat

int main()
{
	int n; // khai bao bien n
	nhap(n); // nhap n 
	int kq=xetchusochan(n); // gan ket qua xetchusochan(n) cho kq
	xuat(kq); // xuat kq
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap
{
	cin>>n;
}
int xetchusochan(int n) // dinh nghia ham xetchusochan
{
	int tam=0; // khai bao bien tam
	while(n!=0) // vong lap while
	{
		tam=n%10; // gan cho tam phan du cua n chia 10
		if (tam%2!=0) // dieu kien neu tam chia 2 khong bang 0
		{
			return false; // tra ve false
		}
		n=n/10; // gan cho n bang n chia 10
	}
	return true;
}
void xuat(int kq) // dinh nghia ham xuat
{
	if (kq) // dieu kien neu kq
	{
		cout<<"CAC CHU SO DEU CHAN";
	}
	else // nguoc lai 
	{
		cout<<"CAC CHU SO KHONG CHAN";
	}
}
