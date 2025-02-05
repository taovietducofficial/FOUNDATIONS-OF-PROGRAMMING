// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 2 số thực a, b. Tính chu vi hình chữ nhật và in ra với độ chính xác 2 chữ số thập phân.

#include <iostream>
#include<iomanip>
using namespace std;

void nhap(float &a, float &b); // khai bao ham nhap a,b tu ban phim
float chuvihcn(float a, float b); // khai bao ham tinh chu vi hinh chu nhat
void xuat (float kq); // khai bao ham xuat ket qua

int main()
{
	float a,b; // khai bao bien a,b kieu float
	nhap(a,b); // nhap a,b tu ban phim
	float kq= chuvihcn(a,b); // tinh chu vi hinh chu nhat
	xuat(kq); // xuat ket qua
	return 0;
}

void nhap(float &a, float &b) // dinh nghia ham nhap a,b tu ban phim
{
	cin>>a>>b;
}

float chuvihcn(float a, float b) // dinh nghia ham tinh chu vi hinh chu nhat
{
	float c=(a+b)*2;
	return c;
}
 
void xuat (float kq) // dinh nghia ham xuat ket qua
{
	cout<<setprecision(2)<<fixed<<kq;
}
