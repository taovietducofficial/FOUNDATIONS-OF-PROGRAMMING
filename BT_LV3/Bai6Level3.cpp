// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 3
// Bài 6: Nhập vào số nguyên dương n. Đếm số ước của n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap so
int demuoc(int n); // khai bao ham dem uoc
void xuat(int kq); // khai bao ham xuat so
 
int main()
{
	int n; // khai bao bien so
	nhap(n); // nhap so tu ban phim
	int kq=demuoc(n); // dem uoc so n
	xuat(kq); // xuat so
	return 0;
}

void nhap(int &n) // dinh nghia ham nhap so
{
	cin>>n;
}

int demuoc(int n) // dinh nghia ham dem uoc
{ 
	int dem=0; // khai bao bien dem
	for(int i=1;i<=n;i++) // dem uoc tu 1 den n
	{
		if (n%i==0) // neu n chia het cho i
		{
			dem=dem+1; // tang bien dem len 1
		}
	}
	return dem;
}

void xuat(int kq) // dinh nghia ham xuat so
{
	cout<<kq;
}
