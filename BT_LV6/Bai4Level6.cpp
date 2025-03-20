// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 4: Viết chương trình nhập vào một mảng A gồm n phần tử. Tính trung bình cộng các phần tử của mảng A chia hết cho 5 và xuất kết quả ra

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]); // nhập mảng A gồm n phần tử
void xuat(double kq); // xuất kết quả
double tinhTBC5(int n, int A[]); // tính trung bình cộng các phần tử của mảng A chia hết cho 5

int main()
{
	int n,A[100]; // số phần tử của mảng A
	nhapMang(n,A); // nhập mảng A gồm n phần tử
	double kq=tinhTBC5(n,A); // tính trung bình cộng các phần tử của mảng A chia hết cho 5
	xuat(kq); // xuất kết quả
	return 0;
}

void nhapMang(int &n, int A[]) // nhập mảng A gồm n phần tử
{
	cin>>n; // nhập số phần tử của mảng A
	for(int i=0;i<n;i++) // nhập từng phần tử của mảng A
		cin>>A[i];
}

void xuat(double kq) // xuất kết quả
{
	cout<<kq; // xuất kết
}
 
double tinhTBC5(int n, int A[]) // tính trung bình cộng các phần tử của mảng A chia hết cho 5
{
	int dem=0; // biến dem đếm số phần tử của mảng A chia hết cho 5
	double S=0.0; // biến S lưu trữ tổng các phần tử của mảng A chia hết cho 5
	for (int i=0;i<n;i++) // duyệt từng phần tử của mảng A
		if (A[i]%5==0) // nếu phần tử A[i] chia hết cho 5 thì cộng vào S và tăng biến dem lên 1
		{
			S+=A[i];
			dem++;
		}
	if(dem==0) // nếu không có phần tử nào trong mảng A chia hết cho 5 thì S=0
		return 0;
	else // nếu có phần tử trong mảng A chia hết cho 5 thì S=S/dem
		S/=dem; 
	return S;
}
