// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 8: Nhập vào 1 số nguyên dương n. Kiểm tra xem các chữ số của n có phải là số tăng dần hay không?

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap
int kiemtra(int n); // khai bao ham kiemtra
void xuat(int kq); // khai bao ham xuat

int main()
{
	int n; // khai bao bien n
	nhap(n); // nhap n
	int kq=kiemtra(n); // gan ket qua kiemtra(n) cho kq
	xuat(kq); // xuat kq
	return 0;
}
void nhap(int &n) 	// dinh nghia ham nhap
{
	cin>>n; 
}
int kiemtra(int n)  // dinh nghia ham kiemtra
{
	int truoc=10, sau=0;
	while(n!=0) // vong lap while
	{
		sau=n%10; // gan cho sau phan du cua n chia 10
		if(sau>truoc) // dieu kien neu sau lon hon truoc
		{
			return false;
		}
		truoc=sau; // gan cho
		n=n/10;
	}
	return true;
}
void xuat(int kq) // dinh nghia ham xuat
{
	if (kq) // dieu kien neu kq
	{
		cout<<"CAC CHU SO TANG DAN";
	}
	else // nguoc lai
	{
		cout<<"CAC CHU SO KHONG TANG DAN";
	}
}
