// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2: Bài 1: Nhập vào 2 số nguyên a,b. Tính thương của a/b. Nếu b=0 thì không chia được.

#include <iostream>
using namespace std;

void nhap(int &a, int &b); // khai bao ham nhap a,b
int tinhthuong(int a,int b, float &thuong); // khai bao ham tinh thuong
void xuat(int b, float kq); // khai bao ham xuat kq

int main()
{
	int a,b; // khai bao bien a,b
	float thuong; // khai bao bien thuong
	nhap (a,b); // nhap a,b tu ban phim
	int co=tinhthuong(a,b,thuong); // tinh thuong cua a,b
	xuat(co,thuong); // xuat ket qua thuong
	return 0;
}

void nhap(int &a, int &b) // dinh nghia ham nhap a,b	 
{
	cin>>a>>b;	
}

int tinhthuong(int a,int b, float &thuong) // dinh nghia ham tinh thuong
{
	if (b==0) // neu b=0 thi khong chia duoc
	{
		return 0;
	}
	else // nguoc lai thi chia duoc
	{
		thuong = float (a)/b; // thuong = a/b
		return 1;
	}
}

void xuat(int co, float thuong) // dinh nghia ham xuat kq
{
	if (co==0) // neu co=0 thi khong chia duoc
	{
		cout<<"KHONG CHIA DUOC";
	}
	else // nguoc lai thi chia duoc
	{
		cout<<thuong;
	}
}
