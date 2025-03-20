// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 10: Viết chương trình nhập vào một số nguyên dương n và mảng A có n phần tử. Tính số phần tử trong mảng A bằng x (x nhập từ bàn phím).

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]); // Nhap mang A co n phan tu
void nhap(int &x); // Nhap x
void xuat(int kq); // Xuat kq
int demx(int n, int A[],int x); // Dem so phan tu trong mang A co n

int main()
{
	int n, A[100],x; // Khai bao n, A, x
	nhapMang(n,A); // Nhap mang A co n phan tu
	nhap(x);
	int kq=demx(n,A,x); // Dem so phan tu trong mang A co n
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

int demx(int n, int A[],int x) // Dem so phan tu trong mang A co n
{
	int S=0;
	for (int i=0;i<n;i++) // Duyet mang A co n phan tu
		if(A[i]==x) // Neu phan
			S++; 
	return S;
}
