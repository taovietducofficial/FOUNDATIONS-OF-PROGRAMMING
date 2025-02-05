// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 3 số nguyên h, m, s. Kiểm tra xem h, m, s có hợp lệ không.

#include <iostream>
#include <math.h> 
using namespace std;

void nhap(int &h,int &m, int &s); // khai bao ham nhap h,m,s tu ban phim
bool ktra(int h,int m,int s); // khai bao ham kiem tra gio phut giay
void xuat (bool kt); // khai bao ham xuat kq

int main()
{
	int h,m,s; // khai bao bien h,m,s
	nhap(h,m,s); // nhap h,m,s tu ban phim
	bool kt= ktra(h,m,s); // gan kt = ket qua ham ktra
	xuat(kt); // xuat ket qua
	return 0;
}

void nhap(int &h,int &m, int &s) // dinh nghia ham nhap h,m,s tu ban phim
{
	cin>>h>>m>>s;
}

bool ktra(int h,int m,int s) // dinh nghia ham kiem tra gio phut giay
{
	if ((h>=0)&&(h<24) && (m>=0)&&(m<60) && (s>=0)&&(s<60)) // neu h,m,s hop le
	{
		return true; // tra ve true
	}
	else  // nguoc lai tra ve false
	{
		return false;
	}
}

void xuat (bool kt) // dinh nghia ham xuat kq
{
	if (kt==true) // neu kt = true
	{
		cout << "HOP LE";
	}
	else if (kt==false) // neu kt = false
	{
		cout << "KHONG HOP LE";
	}
}
