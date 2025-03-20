// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 3: Viết chương trình nhập vào một mảng A gồm n phần tử. Tính trung bình cộng các phần tử của mảng A và xuất kết quả ra


#include <iostream>
using namespace std;

void nhapMang(int &n, double A[]); // nhập mảng A gồm n phần tử 
void xuat(double kq); // xuất kết quả
double tinhTBC(int n, double A[]); // tính trung bình cộng các phần tử của mảng

int main()
{
	int n; // số phần tử của mảng
	double A[100]; // mảng A gồm n phần tử
	nhapMang(n,A); // nhập mảng A gồm n phần tử
	double kq=tinhTBC(n,A); // tính trung bình cộng các phần tử của mảng
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

double tinhTBC(int n, double A[]) // tính trung bình cộng các phần tử của mảng
{ 
	double S=0.0; // biến S lưu trữ tổng các phần tử của mảng
	int dem=0; // biến dem đếm số phần tử của mảng
	for (int i=0;i<n;i++) // duyệt từng phần tử của mảng
	{
		S+=A[i]; // cộng từng phần tử vào S
		dem++;
	}
	if(dem==0) // nếu không có phần tử nào trong mảng thì S=0
		S=0;
	else	 // nếu có phần tử trong mảng thì S=S/dem
		S/=n;
	return S;
}
