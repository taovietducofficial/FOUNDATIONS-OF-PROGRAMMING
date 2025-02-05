// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 2 số nguyên a, b. Tính tổng của 2 số nguyên đó và in ra 

#include <iostream>
using namespace std;

void nhap (int &a,int &b);  // khai bao ham nhap a,b tu ban phim
int tinhtong(int a, int b); // khai bao ham tinh tong a,b
void xuat(int kq); // khai bao ham xuat ket qua

int main()
{
	int a,b;
	nhap (a,b); // nhap a,b tu ban phim
	int kq = tinhtong(a,b); // tinh tong a,b
	xuat(kq); // xuat ket qua
	return 0; // ket thuc chuong trinh
}

void nhap (int &a,int &b) // dinh nghia ham nhap a,b tu ban phim
{
	cin>>a>>b; // nhap a,b tu ban phim
}

int tinhtong(int a, int b) // dinh nghia ham tinh tong a,b
{
	int t = a + b; // tinh tong a,b
	return t;
}

void xuat(int kq) // dinh nghia ham xuat ket qua
{
	cout<<kq; // xuat ket qua
}

