// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 5: Nhập vào 4 số thực a,b,c,d. Tìm số lớn nhất trong 4 số đó.

#include <iostream>
using namespace std;

void nhap (float &a, float &b, float &c, float &d); // khai bao ham nhap a,b,c,d
float timmax(float a, float b, float c, float d); // khai bao ham tim max
void xuat(float kq);

int main()
{
	float a,b,c,d; // khai bao bien a,b,c,d
	nhap (a,b,c,d); // nhap a,b,c,d tu ban phim
	float kq = timmax(a,b,c,d); // tim max cua a,b,c,d
	xuat(kq); // xuat ket qua
	return 0;
}

void nhap (float &a, float &b, float &c, float &d) // dinh nghia ham nhap a,b,c,d
{
	cin>>a>>b>>c>>d;
}

float timmax(float a, float b, float c, float d) // dinh nghia ham tim max
{
	float max=a; // gan max = a
	if (max<b) // neu max<b thi max=b
	{ 
		max=b;
	}
	if (max<c) // neu max<c thi max=c
	{
		max=c;
	}
	if (max<d) // neu max<d thi max=d
	{
		max=d;
	}
	return max;
}

void xuat(float kq)	// dinh nghia ham xuat kq
{
	cout<<kq;
}
