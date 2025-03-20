// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 8: Viết chương trình nhập vào một số nguyên dương n và mảng A có n phần tử. Kiểm tra xem trong mảng A có phần tử nào bằng 0 hay không?

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]); // Nhap mang A co n phan tu
void xuat(bool kq); // Xuat kq
bool kiemTra(int n,int A[]); // Kiem tra xem co phan tu 0 trong mang A hay khong

int main()
{ 
	int n,A[100];
	nhapMang(n,A); // Nhap mang A co n phan tu
	bool kq=kiemTra(n,A); // Kiem tra xem co phan tu 0 trong mang A hay khong
	xuat(kq); // Xuat kq
	return 0;
}
 
void nhapMang(int &n, int A[]) // Nhap mang A co n phan tu
{
	cin>>n;
	for(int i=0;i<n;i++) // Duyet mang A co n phan tu 
		cin>>A[i];
}

void xuat(bool kq) // Xuat kq
{
	cout<<kq;
}

bool kiemTra(int n,int A[]) // Kiem tra xem co phan tu 0 trong mang A hay khong
{
	for(int i=0;i<n;i++) // Duyet mang A co n phan tu 
		if(A[i]==0)
			return true;
	return false;
}
