// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 2: Nhập vào một mảng số thực gồm n phần tử. Tính tổng các phần tử của mảng và xuất kết quả.

#include <iostream>
using namespace std;

void nhapMang(int &n, double A[]); // nhập mảng A gồm n phần tử 
void xuat(double kq); // xuất kết quả 
double tinhTong(int n, double A[]); // tính tổng các phần tử của mảng

int main()
{
	int n;
	double A[100];
	nhapMang(n,A); // nhập mảng A gồm n phần tử
	double kq=tinhTong(n,A); // tính tổng các phần tử của mảng
	xuat(kq);
	return 0;
}

void nhapMang(int &n, double A[]) // nhập mảng A gồm n phần tử
{
	cin>>n;
	for(int i=0;i<n;i++) // nhập từng phần tử của mảng 
		cin>>A[i];
}
 
void xuat(double kq) // xuất kết quả
{
	cout<<kq;
}

double tinhTong(int n, double A[]) // tính tổng các phần tử của mảng
{
	double S=0.0; 
	for (int i=0;i<n;i++) // tính tổng các phần tử của mảng
		S+=A[i]; // cộng từng phần tử vào S
	return S;
}
