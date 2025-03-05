// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 3: Nhập vào 1 số nguyên dương n. Đếm số nguyên tố từ 1 đến n.

#include <iostream>
using namespace std;

void nhap(int &n); 
void xuat(int kq);
int demso(int n); // dem so nguyen to tu 1 den n
bool nguyento(int n);

int main()
{
	int n;
	nhap(n);
	int kq=demso(n); // kq la bien dem so nguyen to tu 1 den n
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat(int kq)
{
	cout<<kq;
}
int demso(int n) // dem so nguyen to tu 1 den n
{
	int dem=0; // bien dem so nguyen to
	for (int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if (nguyento(i)) // neu i la so nguyen to thi tang bien dem len 1
		{
			dem++; // dem so nguyen to
		}
	}
	return dem; // tra ve so luong so nguyen to
}
bool nguyento(int n) // kiem tra so nguyen to
{
	int dem=0; // bien dem so uoc cua n
	for(int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if(n%i==0) // neu n chia het cho i thi tang bien dem len 1
		{
			dem++; // dem so uoc cua n
		}
	}
	if (dem==2) // neu n co 2 uoc thi la so nguyen to
	{
		return true;
	}
	else // nguoc lai la khong phai so nguyen to
	{
		return false;
	}
}
