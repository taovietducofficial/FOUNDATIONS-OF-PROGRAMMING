// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 2: Nhập vào 1 số nguyên dương n. Đếm số hoàn hảo từ 1 đến n.

#include <iostream>
using namespace std;

void nhap(int &n); 
void xuat(int kq);
int demso(int n);
bool hoanhao(int n);

int main()
{
	int n;
	nhap(n);
	int kq=demso(n); // kq la bien dem so hoan hao tu 1 den n
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat(int kq)
{
	cout<<kq;
}
int demso(int n) // dem so hoan hao tu 1 den n
{
	int dem=0; // bien dem so hoan hao
	for (int i=1;i<=n;i++) // duyet tu 1 den n
	{
		if (hoanhao(i)) // neu i la so hoan hao thi tang bien dem len 1
		{
			dem++; // dem so hoan hao
		}
	}
	return dem;
}
bool hoanhao(int n) // kiem tra so hoan hao
{
	int tong=0;
	for(int i=1;i<n;i++) // tinh tong cac uoc cua n
	{
		if(n%i==0) // neu n chia het cho i thi cong i vao tong
		{
			tong=tong+i; // tinh tong cac uoc cua n
		}
	}
	if (tong==n) // neu tong
	{
		return true;
	}
	else // nguoc lai	
	{
		return false;
	}
}
