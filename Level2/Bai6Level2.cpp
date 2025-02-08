// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 2
// Bài 6: Nhập vào 3 số thực a,b,c. Kiểm tra xem 3 số đó có tạo thành tam giác không? Nếu có thì đó là tam giác gì?

#include <iostream>
#include <math.h>
using namespace std;

void nhap(float &a, float &b, float &c); // khai bao ham nhap a,b,c 
float ktratg(float a, float b, float c); // khai bao ham kiem tra tam giac
int xettamgiac(float a, float b, float c); // khai bao ham xet tam giac
void xuat(int kq);

int main()
{
	float a,b,c; // khai bao bien a,b,c
	nhap(a,b,c); // nhap a,b,c tu ban phim
	int kq=xettamgiac(a,b,c); // xet tam giac co ton tai hay khong
	xuat(kq); // xuat ket qua
	return 0;
}

void nhap(float &a, float &b, float &c) // dinh nghia ham nhap a,b,c
{
	cin>>a>>b>>c;
}
float ktratg(float a, float b, float c) // dinh nghia ham kiem tra tam giac
{
	if ( (a>0) && (b>0) && (c>0) &&  ( (a+b) > c ) && ( (a+c) > b ) && ( (b+c) > a ) ) 
	// dieu kien de tao thanh tam giac la tong 2 canh lon hon canh con lai
	{
		return true;
	}
	else  // nguoc lai khong phai tam giac
	{
		return false;
	}
}

int xettamgiac(float a, float b, float c) // dinh nghia ham xet tam giac
{
	if(ktratg(a,b,c))  // neu la tam giac thi kiem tra xem tam giac do la tam giac gi
	{
		if ((a==b) && (b==c)) // neu 3 can 
		{ 
			return 1;
		}
		else if ( (a==b) || (b==c) || (a==c) ) // neu 2 can 
		{
			if ( ( (a*a) + (b*b) == (c*c) ) || ( (a*a) + (c*c) == (b*b) ) || ( (b*b) + (c*c) == (a*a) ) ) 
			// neu la tam giac vuong can 
			{
				return 2;
			}
			else  // neu khong phai tam giac vuong can
			{
				return 3;
			}
		}
		else if ( ( (a*a) + (b*b) == (c*c) ) || ( (a*a) + (c*c) == (b*b) ) || ( (b*b) + (c*c) == (a*a) ) )  
		// neu la tam giac vuong 	
		{
			return 4;
		}
		else 
		{
			return 5;
		}
	}
	else  // neu khong phai tam giac thi khong hop le
	{
		return 0;
	}
}

void xuat(int kq) // dinh nghia ham xuat kq 
{
	if (kq==0) // neu khong phai tam giac
	{
		cout<<"KHONG HOP LE";
	}
	else if (kq==1) // neu la tam giac deu
	{
		cout<<"TAM GIAC DEU";
	}
	else if (kq==2) // neu la tam giac vuong can
	{
		cout<<"TAM GIAC VUONG CAN";
	}
	else if (kq==3) // neu la tam giac can
	{
		cout<<"TAM GIAC CAN";
	}
	else if (kq==4) // neu la tam giac vuong
	{
		cout<< "TAM GIAC VUONG";
	}
	else if (kq==5) // neu la tam giac thuong
	{
		cout<< "TAM GIAC THUONG";
	}
}
