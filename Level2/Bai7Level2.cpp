// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 7: Nhập vào 3 số a,b,c. Giải phương trình bậc 2: ax^2 + bx + c = 0 (a!=0) và xuất kết quả.

#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &a, int &b, int &c); // khai bao ham nhap a,b,c
int tinhnghiem(int a, int b, int c, float &x1, float &x2); // khai bao ham tinh nghiem
void xuat(int kq, float x1, float x2); // khai bao ham xuat ket qua

int main()
{
	int a,b,c; // khai bao bien a,b,c
	float x1,x2; // khai bao bien x1,x2
	nhap(a,b,c); // nhap a,b,c tu ban phim
	int kq = tinhnghiem(a,b,c,x1,x2); // tinh nghiem phuong trinh bac 2
	xuat(kq,x1,x2); // xuat ket qua 
	return 0;
}

void nhap(int &a, int &b, int &c) // dinh nghia ham nhap a,b,c
{
	cin>>a>>b>>c;
}

int tinhnghiem(int a, int b, int c, float &x1, float &x2) // dinh nghia ham tinh nghiem
{
	if (a!=0)  // phuong trinh bac 2
	{
		float d=(b*b-4*a*c); // tinh delta 
		if (d==0) // neu delta = 0 
		{
			x1=(float(-b)/(2*a)); // tinh nghiem kep 
			return 1;
		}
		else if (d>0) // neu delta > 0
		{
			x1=((-b+sqrt(d))/(2*a)); // tinh nghiem 1
			x2=((-b-sqrt(d))/(2*a)); // tinh nghiem 2
			return 2;
		}
		else if (d<0) // neu delta < 0
		{ 
			return 0;
		}
	}
	else if (b!=0)  // phuong trinh bac 1 	
	{
		x1=float(-c)/b; // tinh nghiem 
		return 1;
	}
	else if (c!=0) // phuong trinh vo nghiem
	{
		return 0;
	}
	else  // phuong trinh vo so nghiem
	{
		return 3;
	}
}

void xuat(int kq, float x1, float x2) // dinh nghia ham xuat ket qua
{
	if (kq==0) // neu vo nghiem
	{
		cout<<"VO NGHIEM"; 
	}
	else if (kq==1) // neu co nghiem kep
	{
		cout<<x1;
	}
	else if (kq==2) // neu co 2 nghiem
	{
		cout<<x1<<" "<<x2;
	}
	else  // neu vo so nghiem
	{
		cout<<"VO SO NGHIEM";
	}
}
