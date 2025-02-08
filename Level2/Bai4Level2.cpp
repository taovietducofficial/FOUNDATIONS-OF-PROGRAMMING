// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 4: Nhập vào tháng và năm. Tìm số ngày của tháng đó.

#include <iostream>
using namespace std;

void nhap(int &m,int &y); // khai bao ham nhap m,y
bool namnhuan(int y); // khai bao ham nam nhuan
int timngay(int m,int y); // khai bao ham tim ngay
void xuat(int kq); // khai bao ham xuat kq

int main()
{
	int m, y; // khai bao bien m,y
	nhap(m,y); // nhap m,y tu ban phim
	int kq = timngay(m,y); // tim ngay cua thang m nam y
	xuat(kq); // xuat ket qua
	return 0;
}

void nhap(int &m,int &y) // dinh nghia ham nhap m,y
{ 
	cin>>m>>y;
}

bool namnhuan(int y) // dinh nghia ham nam nhuan
{
	if ( ( y%4==0 && y%100!=0 ) || y%400==0 ) 
	// nam nhuan la nam chia het cho 4 nhung khong chia het cho 100 hoac chia het cho 400
	{
		return true;
	}
	else  // nguoc lai khong phai nam nhuan
	{
		return false;
	}
}

int timngay(int m,int y) // dinh nghia ham tim ngay
{
	int kq; // khai bao bien kq
	if  (m==2)  // thang 2 co 28 hoac 29 ngay
	{
		if (namnhuan(y))
		{
			kq=29;
		}
		else // neu khong phai nam nhuan thi thang 2 co 28 ngay
		{
			kq=28;
		}
	}
	else if ( (m==4) || (m==6) || (m==9) || (m==11) ) // thang 4,6,9,11 co 30 ngay
	{
		kq=30;
	}
	else // cac thang con lai co 31 ngay
	{
		kq=31;
	}
	return kq;
}

void xuat(int kq) // dinh nghia ham xuat kq
{
	cout<<kq;
}
