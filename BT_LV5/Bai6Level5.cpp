// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 6: Nhập vào 1 số nguyên dương n. Đếm số chính phương từ 1 đến n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap  n
void xuat(int kq); // khai bao ham xuat kq
int demso(int n); // khai bao ham dem so chinh phuong
bool chinhphuong(int n); // khai bao ham kiem tra so chinh phuong

int main() 
{
	int n;
	nhap(n); // nhap n tu ban phim
	int kq=demso(n); // dem so chinh phuong
	xuat(kq); 
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap n
{
	cin>>n;
}
void xuat(int kq) // dinh nghia ham xuat kq
{
	cout<<kq;
}
int demso(int n) // dinh nghia ham dem so chinh phuong
{
	int dem=0;
	for (int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if (chinhphuong(i)) // neu la so chinh phuong
		{
			dem++; // tang dem len 1
		}
	}
	return dem; // tra ve so luong so chinh phuong
}
bool chinhphuong(int n) // dinh nghia ham kiem tra so chinh phuong
{
	if(n<1) // neu n<1 thi tra ve false
	{
		return false;
	}
	int i=1;
	while (i*i<=n) // duyet tu 1 den can bac 2 cua n
	{
		if (i*i==n) // neu i*i=n thi tra ve true
		{	
			return true;
		}
		i++; // tang i len 1
	}
	return false;
}
