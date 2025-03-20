// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 6: Viết chương trình nhập vào một mảng A gồm n phần tử. Đếm số phần tử của mảng A là số âm và xuất kết quả ra.

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]); // nhập mảng A gồm n phần tử
void xuat(int kq); // xuất kết quả
int demSoAm(int n, int A[]); // đếm số phần tử của mảng A là số âm

int main()
{
	int n,A[100]; // số phần tử của mảng A
	nhapMang(n,A);
	int kq=demSoAm(n,A); // đếm số phần tử của mảng A là số âm
	xuat(kq);
	return 0;
}
 
void nhapMang(int &n, int A[]) // nhập mảng A gồm n phần tử
{
	cin>>n;
	for(int i=0;i<n;i++) // nhập từng phần tử của mảng A
		cin>>A[i];
}

void xuat(int kq) // xuất kết quả
{
	cout<<kq;
}

int demSoAm(int n, int A[]) // đếm số phần tử của mảng A là số âm
{
	int dem=0;
	for (int i=0;i<n;i++) // duyệt từng phần tử của mảng A
		if (A[i]<0) // nếu phần tử A[i] là số âm thì cộng vào S
			dem++;
	return dem;
}
