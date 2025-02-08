// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 10: Nhập vào thời gian (giờ, phút, giây). Tính thời gian sau 1 giây.

#include <iostream>
using namespace std;

void nhap(int &h, int &m, int&s); // khai bao ham nhap so 
bool hople(int h, int m, int s); // khai bao ham kiem tra hop le
bool tinhthoigian(int h,int m,int s, int &h1,int &m1, int &s1); // khai bao ham tinh thoi gian
void xuat(bool kq, int h1, int m1, int s1); // khai bao ham xuat so

int main()
{
	int h,m,s,h1,m1,s1; // khai bao bien so
	nhap(h,m,s); // nhap so tu ban phim
	bool kq= tinhthoigian(h,m,s,h1,m1,s1); // tinh thoi gian
	xuat(kq, h1,m1,s1); // xuat so 
	return 0;
}

void nhap(int &h, int &m, int&s) // dinh nghia ham nhap so
{
	cin>>h>>m>>s;
}

bool hople(int h, int m, int s) // dinh nghia ham kiem tra hop le
{
	if ((h>=0) && (h<24) && (m>=0) && (m<60) && (s>=0) && (s<60)) // kiem tra hop le
	{
		return true; 
	}
	else  // khong hop le
	{
		return false;
	}
}

bool tinhthoigian(int h,int m,int s, int &h1,int &m1, int &s1) // dinh nghia ham tinh thoi gian
{
	if (hople(h,m,s)) // kiem tra hop le
	{
		h1=h;
		m1=m; 
		s1=s+1; // tang 1 giay
		if (s1==60) // tinh toan thoi gian
		{
			s1=0;
			m1++; // tang 1 phut
			if (m1==60) // tinh toan thoi gian
			{
				m1=0;
				h1++;
				if (h1==24) // tinh toan thoi gian
				{
					h1=0;
				}
			}
		}
		return true;
	}
	else // khong hop le 
	{
		return false;
	}
}

void xuat(bool kq, int h1, int m1, int s1) // dinh nghia ham xuat so
{
	if (kq) // kiem tra hop le
	{
		cout<<h1<<" "<<m1<<" "<<s1; // xuat thoi gian
	}
	else  // khong hop le
	{
		cout<<"KHONG HOP LE";
	}
}
