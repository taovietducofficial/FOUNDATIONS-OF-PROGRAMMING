// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 9: Viết chương trình nhập vào một số nguyên dương n và mảng A có n phần tử. Tính tổng các phần tử trong mảng A lớn hơn x (x nhập từ bàn phím).

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]); // Nhap mang A co n phan tu
void nhap(int &x); // Nhap x
void xuat(int kq); // Xuat kq
int tinhTong(int n, int A[],int x); // Tinh tong cac phan tu trong mang A co n phan tu va lon hon x

int main()
{
	int n, A[100],x;
	nhapMang(n,A); // Nhap mang A co n phan tu
	nhap(x); 
	int kq=tinhTong(n,A,x);	// Tinh tong cac phan tu trong mang A co n phan tu va lon hon x
	xuat(kq);
	return 0;
}

void nhap(int &x) // Nhap x
{
	cin>>x;
}

void nhapMang(int &n, int A[]) // Nhap mang A co n phan tu
{
	cin>>n;
	for(int i=0;i<n;i++) // Duyet mang A co n phan tu
		cin>>A[i];
}

void xuat(int kq) // Xuat kq
{
	cout<<kq;
}

int tinhTong(int n, int A[],int x) // Tinh tong cac phan tu trong mang A co n phan tu va lon hon x
{
	int S=0;
	for (int i=0;i<n;i++) // Duyet mang A co n phan tu
		if(A[i]>x) // Neu phan tu A[i] lon hon x thi cong vao S
			S+=A[i]; // Cong phan tu A[i] vao S
	return S;
}
