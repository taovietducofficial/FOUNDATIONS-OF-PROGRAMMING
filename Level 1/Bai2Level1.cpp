// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 1 số nguyên n. Tính giá trị tuyệt đối của n và in ra.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap n tu ban phim 
int gttd(int n); // khai bao ham gia tri tuyet doi cua n
void xuat(int kq); // khai bao ham xuat ket qua 

int main () 
{
	int n;
	nhap(n); // nhap n tu ban phim
	int kq = gttd(n); // tinh gia tri tuyet doi cua n
	xuat(kq); // xuat ket qua
	return(0); 
}

void nhap(int &n) // dinh nghia ham nhap n tu ban phim
{
	cin>>n;
}

int gttd(int n) // dinh nghia ham gia tri tuyet doi cua n
{
	if (n<0) 
	{
		n=-n;
	}
	return n;
}

void xuat(int kq) // dinh nghia ham xuat ket qua
{
	cout<<kq;
}
