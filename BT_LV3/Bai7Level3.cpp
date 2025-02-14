// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 7: Nhập vào số nguyên dương n. Tính tổng các chữ số của n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int tinhtongchuso(int n); // khai bao ham tinh tong chu so
void xuat(int kq); // khai bao ham xuat so

int main()
{
	int n; // khai bao bien so
	nhap(n); // nhap so tu ban phim
	int kq=tinhtongchuso(n); // tinh tong chu so
	xuat(kq); // xuat so 
	return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
	cin>>n;
}

int tinhtongchuso(int n) // dinh nghia ham tinh tong chu so
{
	int tam=0, tong=0; // khai bao bien tam va tong
	while(n!=0) // tinh tong chu so cua n
	{
		tam=n%10; // lay chu so cuoi cung cua n
		tong=tong+tam; // cong chu so vao tong
		n=n/10; // loai bo chu so cuoi cung cua n
	}
	return tong;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
