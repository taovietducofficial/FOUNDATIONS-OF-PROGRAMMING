// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 5: Nhập vào 1 số nguyên dương n. Tìm chữ số lớn nhất của n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap
int timmax(int n); // khai bao ham timmax
void xuat(int kq); // khai bao ham xuat

int main()
{
	int n; // khai bao bien n
	nhap(n); // nhap n
	int kq=timmax(n); // gan ket qua timmax(n) cho kq
	xuat(kq); // xuat kq 
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap
{
	cin>>n; // nhap n
}
int timmax(int n) // dinh nghia ham timmax
{
	int tam=0, max=0; // khai bao bien tam, max
	while(n!=0) // vong lap while
	{
		tam=n%10; // gan cho tam phan du cua n chia 10
		if (max<tam) // dieu kien neu max < tam
		{
			max=tam; // gan max = tam
		}
		n=n/10; // gan cho n bang n chia 10
	}
	return max;
}
void xuat(int kq) // dinh nghia ham xuat
{
	cout<<kq;	
}
