// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 5: Nhập vào 1 số nguyên dương n. Liệt kê các số hoàn hảo từ 1 đến n.

#include <iostream>
using namespace std;

void nhap(int &n); // khai bao ham nhap  n
void xuat(int n); // khai bao ham xuat n 
void lietkehh(int n); // khai bao ham liet ke hoan hao
bool hoanhao(int n); // khai bao ham kiem tra hoan hao

int main()
{
	int n;
	nhap(n); // nhap n 
	lietkehh(n); // liet ke hoan hao
	return 0;
}
void nhap(int &n) // dinh nghia ham nhap n
{
	cin>>n;
}
void xuat(int n) // dinh nghia ham xuat n
{
	cout<<n<<" ";
}
void lietkehh(int n) // dinh nghia ham liet ke hoan hao
{
	for (int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if (hoanhao(i)) // neu la so hoan hao
		{
			cout<<i<<" ";
		}
	}
}
bool hoanhao(int n) // dinh nghia ham kiem tra hoan hao
{
	int tong=0;
	for(int i=1;i<n;i++) // duyet tu 1 den n-1
	{
		if(n%i==0) // neu n chia het cho i
		{
			tong=tong+i; // cong i vao tong
		}
	}
	if (tong==n) // neu tong bang n
	{
		return true;
	}
	else // nguoc lai
	{
		return false;
	}
}
