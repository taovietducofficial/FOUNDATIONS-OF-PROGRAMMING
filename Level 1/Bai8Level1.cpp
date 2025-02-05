// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 1 ký tự. Chuyển đổi ký tự đó thành ký tự in hoa nếu ký tự đó là ký tự in thường và ngược lại.

#include <iostream>
using namespace std;

void nhap(char & a); // khai bao ham nhap a tu ban phim
char chuyendoi(char b); // khai bao ham chuyen doi chu hoa thanh chu thuong va nguoc lai
void xuat(char kq); // khai bao ham xuat kq

int main()
{
	char a; // khai bao bien a
	nhap(a); // nhap a tu ban phim
	char kq=chuyendoi(a); // gan kq = ket qua ham chuyendoi
	xuat(kq); // xuat ket qua
	return 0;
}

void nhap(char &a) // dinh nghia ham nhap a tu ban phim
{
	cin>>a;
}

char chuyendoi(char b) // dinh nghia ham chuyen doi chu hoa thanh chu thuong va nguoc lai
{
	if (b>='a' && b<='z') // neu b la chu thuong
	{
		b=b-32;  // chuyen b thanh chu hoa
	}
	else if (b>='A' && b<='Z')  // neu b la chu hoa
	{
		b=b+32; // chuyen b thanh chu thuong
	}
	return b;
}

void xuat(char kq) // dinh nghia ham xuat kq
{
	cout<<kq;
}
