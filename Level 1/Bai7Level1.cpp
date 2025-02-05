// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Nhập vào 3 số thực a, b, c. Kiểm tra xem a, b, c có phải là 3 cạnh của 1 tam giác không?

#include <iostream>
using namespace std;

void nhap(float &a,float &b,float &c); // khai bao ham nhap a,b,c tu ban phim
bool kttamgiac(float a,float b,float c); //	khai bao ham kiem tra tam giac
void xuat(bool kt); // khai bao ham xuat kq

int main ()
{
	float a,b,c; // khai bao bien a,b,c
	nhap(a,b,c); // nhap a,b,c tu ban phim
	bool kt = kttamgiac(a,b,c); // gan kt = ket qua ham kttamgiac
	xuat(kt); // xuat ket qua
	return 0;
}

void nhap(float &a,float &b,float &c) // dinh nghia ham nhap a,b,c tu ban phim
{
	cin>>a>>b>>c;
}

bool kttamgiac(float a,float b,float c) // dinh nghia ham kiem tra tam giac
{
	if ((a+b)>c && (a+c)>b && (b+c)>a && (a>0) && (b>0) && (c>0)) 
	// neu a,b,c la 3 canh cua tam giac
	{
		return true;
	}
	else // nguoc lai tra ve false
	{
		return false;
	}
}

void xuat(bool kt) // dinh nghia ham xuat kq
{
	if (kt==true) // neu kt = true
	{
		cout<<"LA TAM GIAC";
	}
	else if (kt==false) // neu kt = false
	{
		cout<<"KHONG LA TAM GIAC";
	}
}
