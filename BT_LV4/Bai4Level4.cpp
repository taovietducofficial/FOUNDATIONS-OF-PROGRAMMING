// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 4: Nhập vào 1 số nguyên dương n. Kiểm tra xem n có phải là số đối xứng hay không.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so nguyen n
bool doixung(int n); // khai bao ham kiem tra so doi xung
void xuat(int kq); // khai bao ham xuat ket qua

int main()
{
	int n; // khai bao bien n
	nhap(n); 
	bool kq=doixung(n); // gan kq bang ket qua kiem tra so doi xung
	xuat(kq);
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap so nguyen n
{
	cin>>n;
}
bool doixung(int n) // dinh nghia ham kiem tra so doi xung
{
	int tam=0, n1=0, a=n;
	while(n!=0) // chuyen so n sang so doi xung n1
	{
		tam=n%10; // lay chu so cuoi cung cua n
		n1=n1*10+tam; // gan chu so cuoi cung cua n vao n1
		n=n/10; // cat chu so cuoi cung cua n
	} 
	if (n1==a) // neu n1=a thi tra ve true
	{
		return true;
	}
	else // nguoc lai tra ve false
	{
		return false;
	}
}
void xuat(int kq) // dinh nghia ham xuat ket qua
{
	if (kq) // neu kq=true thi in ra la so doi xung
	{
		cout<<"LA SO DOI XUNG";
	}
	else // nguoc lai in ra khong la so doi xung
	{
		cout<<"KHONG LA SO DOI XUNG";
	}
}
