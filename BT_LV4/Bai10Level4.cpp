// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 10: Nhập vào 1 số nguyên dương n. Liệt kê n số Fibonacci đầu tiên.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap
void xuat(int F); // khai bao ham xuat
int Fibonacci(int i, int &a1, int &a2); // khai bao ham Fibonacci
void lietkesoF(int n);  // khai bao ham liet ke so Fibonacci

int main() 
{
	int n; // khai bao bien n
	nhap(n); // nhap n
	lietkesoF(n); // liet ke so Fibonacci
	return 0; // ket thuc chuong trinh
}
void nhap(int &n) // dinh nghia ham nhap
{
	cin>>n;
}
int Fibonacci(int i, int &a1, int &a2)  // dinh nghia ham Fibonacci
{
	int a; 
	if (i==1)  // dieu kien neu i=1
	{
		a=1;
	}
	else if (i==2) // dieu kien neu i=2
	{
		a=1;
	}
	else // dieu kien neu i khac 1 va 2
	{
		a=a1+a2;  // gan a bang a1 cong a2
	}
	a2=a1;  // gan a2 bang a1
	a1=a;  // gan a1 bang a
	return a; 
}
void lietkesoF(int n)  // dinh nghia ham liet ke so Fibonacci
{ 
	int F,a1=1,a2=1; 	
	for (int i=1;i<=n;i++)  // vong lap for
	{
		F=Fibonacci(i,a1,a2);  // gan F bang ham Fibonacci
		xuat(F);
	}
}
void xuat(int F) // dinh nghia ham xuat
{
	cout<<F<<" ";
}
