// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 8: Nhập vào số nguyên từ 0 đến 9. Xuất ra số đó dưới dạng chữ.

#include <iostream>
using namespace std;

void nhap(int &so); // khai bao ham nhap so 
void xuat(int so); // khai bao ham xuat so

int main()
{
	int so; // khai bao bien so
	nhap(so); // nhap so tu ban phim 
	xuat(so); // xuat so 
	return 0;
}

void nhap(int &so) // dinh nghia ham nhap so
{
	cin>>so;
}

void xuat(int so) // dinh nghia ham xuat so
{
	if (so==0) // so 0
	{
		cout<<"KHONG";
	}
	else if (so==1) // so 1 
	{
		cout<<"MOT";
	}
	else if (so==2) // so 2
	{
		cout<<"HAI";
	}
	else if (so==3) // so 3
	{
		cout<<"BA";
	}
	else if (so==4) // so 4
	{
		cout<<"BON";
	}
	else if (so==5) // so 5
	{
		cout<<"NAM";
	}
	else if (so==6) // so 6
	{
		cout<<"SAU";
	}
	else if (so==7) // so 7
	{
		cout<<"BAY";
	}
	else if (so==8) // so 8	
	{
		cout<<"TAM";
	}
	else if (so==9) // so 9
	{
		cout<<"CHIN";
	}
	else  // so khong biet viet
	{
		cout<<"KHONG BIET VIET";
	}
}
