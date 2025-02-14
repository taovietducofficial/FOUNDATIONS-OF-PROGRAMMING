// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 8: Nhập vào số nguyên dương n. Đảo ngược số n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int daoso(int n); // khai bao ham dao so
void xuat(int kq); // khai bao ham xuat so

int main()
{
	int n; // khai bao bien so
	nhap(n); // nhap so tu ban phim
	int kq=daoso(n); // dao so
	xuat(kq); // xuat so
	return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
	cin>>n; 
}

int daoso(int n) // dinh nghia ham dao so
{
	int tam=0, n1=0; // khai bao bien tam va n1
	while(n!=0) // dao so n 
	{
		tam=n%10; // lay chu so cuoi cung cua n
		n1=n1*10+tam; // cong chu so vao n1
		n=n/10; // loai bo chu so cuoi cung cua n
	}
	return n1;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;	
}
