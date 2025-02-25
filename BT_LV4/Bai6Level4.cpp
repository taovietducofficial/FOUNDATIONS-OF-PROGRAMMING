// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 4
// Bài 6: Nhập vào 1 số nguyên dương n. Đếm số nguyên tố từ 1 đến n.

#include <iostream> 
using namespace std;

void nhap(int &n); // khai bao ham nhap
void xuat (int kq); // khai bao ham xuat
int demso(int n); // khai bao ham demso
bool nguyento(int n); // khai bao ham nguyento

int main() // ham main
{
	int n; // khai bao bien n
	nhap(n); // nhap n
	int kq=demso(n); // gan ket qua demso(n) cho kq
	xuat(kq); // xuat kq
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap
{
	cin>>n;
}
void xuat (int kq) // dinh nghia ham xuat
{
	cout<<kq; 
}
int demso(int n) // dinh nghia ham demso
{
	int dem=0,tam; // khai bao bien dem, tam
	while(n!=0) // vong lap while
	{
		tam=n%10; // gan cho tam phan du cua n chia 10
		if (nguyento(tam)) // dieu kien neu nguyento(tam)
		{
			dem++; // tang bien dem len 1
		}
		n=n/10; // gan cho n bang n chia 10
	}
	return dem;
}

bool nguyento(int n) // dinh nghia ham nguyento
{
	int dem=0; // khai bao bien dem
	for(int i=1;i<=n;i++) // vong lap for
	{
		if(n%i==0) // dieu kien neu n chia i bang 0
		{
			dem++; // tang bien dem len 1
		}
	}
	if (dem==2) // dieu kien neu dem = 2
	{
		return true;
	}
	else // nguoc lai
	{
		return false;
	}
}

