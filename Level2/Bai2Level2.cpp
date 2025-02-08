// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 2: Nhập vào 2 số nguyên a,b. Tính nghiệm của phương trình ax+b=0. Nếu a=0 thì phương trình có vô số nghiệm.

#include <iostream>
using namespace std;

void nhap(int &a, int &b); // khai bao ham nhap a,b
int tinhnghiem(int a, int b, float &kq); // khai bao ham tinh nghiem
void xuat(int co, float thuong); // khai bao ham xuat kq

int main()
{
	int a,b; // khai bao bien a,b 
	float thuong; // khai bao bien thuong
	nhap (a,b); // nhap a,b tu ban phim
	int co=tinhnghiem(a,b,thuong); // tinh thuong cua a,b
	xuat(co,thuong); // xuat ket qua thuong
	return 0;
}

void nhap(int &a, int &b) // dinh nghia ham nhap a,b	 
{
	cin>>a>>b;	
}

int tinhnghiem(int a, int b, float &thuong) // dinh nghia ham tinh thuong
{
	if (a==0) // neu a=0 thi vo so nghiem
	{
		if(b==0) // neu b=0 thi vo so nghiem
		{
			return 2; // co 2 nghiem
		}
		else // nguoc lai thi vo nghiem
		{
			return 0;
		}
	}
	else // nguoc lai thi chia duoc
	{
		thuong = float(-b)/a; // thuong = -b/a
		return 1; // co 1 nghiem
	}
}

void xuat(int co,float thuong) // dinh nghia ham xuat kq
{
	if (co==2) // neu co=2 thi vo so nghiem
	{
		cout<<"VO SO NGHIEM";
	}
	else if (co==0) // neu co=0 thi vo nghiem
	{
		cout<<"VO NGHIEM";
	}
	else // nguoc lai thi co nghiem
	{ 
		cout<<thuong;
	}
}
