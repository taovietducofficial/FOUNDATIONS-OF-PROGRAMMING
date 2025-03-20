// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 5: Viết chương trình nhập vào một mảng A gồm n phần tử. Tính tổng các phần tử của mảng A là số chẵn và xuất kết quả ra.

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]); // nhập mảng A gồm n phần tử
void xuat(int kq); // xuất kết quả
int tinhTongChan(int n, int A[]); // tính tổng các phần tử của mảng A là số chẵn

int main()
{
	int n,A[100]; // số phần tử của mảng A
	nhapMang(n,A); // nhập mảng A gồm n phần tử
	int kq=tinhTongChan(n,A); // tính tổng các phần tử của mảng A là số chẵn
	xuat(kq); // xuất kết quả
	return 0;
}

void nhapMang(int &n, int A[]) // nhập mảng A gồm n phần tử
{
	cin>>n; // nhập số phần tử của mảng A
	for(int i=0;i<n;i++) // nhập từng phần tử của mảng A
		cin>>A[i]; 
}

void xuat(int kq) // xuất kết quả
{
	cout<<kq;
}

int tinhTongChan(int n, int A[]) // tính tổng các phần tử của mảng A là số chẵn
{
	int S=0; // biến S lưu trữ tổng các phần tử của mảng A là số chẵn
	for (int i=0;i<n;i++) // duyệt từng phần tử của mảng A
		if (A[i]%2==0) // nếu phần tử A[i] là số chẵn thì cộng vào S
			S+=A[i]; // nếu không có phần tử nào trong mảng A là số chẵn thì S=0
	return S;
}
