// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 10: Nhập vào số nguyên n. Tính tổng S = 1! + 2! + ... + n!.

#include <iostream>
using namespace std;

void nhap(int &n); // nhập số nguyên n
void xuat(int kq); // xuất kết quả
int giaithua(int a); // tính giai thừa
int tinhtong(int n); // tính tổng S = 1! + 2! + ... + n!

int main()
{
	int n;
	nhap(n);
	int kq=tinhtong(n);
	xuat(kq);
	return 0;
}
void nhap(int &n) // nhập số nguyên n
{
	cin>>n;
}
void xuat(int kq) // xuất kết quả
{
	cout<<kq;
}
int giaithua(int a) // tính giai thừa
{
	int b=1; 
	for (int i=1;i<=a;i++) // tính giai thừa của a
	{
		b=b*i; // b = b * i = 1 * 1 = 1, 1 * 2 = 2, 2 * 3 = 6, 6 * 4 = 24, 24 * 5 = 120
	}
	return b;
}
int tinhtong(int n) // tính tổng S = 1! + 2! + ... + n!
{
	int S=0; // khởi tạo S = 0
	for (int i=1; i<=n; i++) // tính tổng S
	{
		S=S+giaithua(i); 
		// S = S + giaithua(i) = 0 + giaithua(1) = 1, 1 + giaithua(2) = 3, 3 + giaithua(3) = 9, 9 + giaithua(4) = 33, 33 + giaithua(5) = 153
	}
	return S;
}





























