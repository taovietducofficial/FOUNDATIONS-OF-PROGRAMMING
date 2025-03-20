// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 7: Viết chương trình nhập vào một số nguyên dương

#include <iostream>
using namespace std;

void nhap(int &n); // Nhap n tu ban phim
void xuatMang(int n,int A[]); // Xuat mang A co n phan tu
void timDayFibo(int n, int A[]); // Tim day Fibo co n phan tu

int main()
{
	int n,A[100];
	nhap(n); // Nhap n tu ban phim
	timDayFibo(n,A); // Tim day Fibo co n phan tu
	xuatMang(n,A); // Xuat mang A co n phan tu
	return 0;
}

void nhap(int &n) // Nhap n tu ban phim
{
	cin>>n;
}

void xuatMang(int n,int A[]) // Xuat mang A co n phan tu
{
	for(int i=0;i<n;i++) // Duyet mang A co n phan tu
		cout<<A[i]<<" ";
}	

void timDayFibo(int n, int A[]) // Tim day Fibo co n phan tu
{
	A[0]=0;
	A[1]=1;
	for (int i=2;i<n;i++) // Duyet mang A co n phan tu
	{
		A[i]=A[i-1]+A[i-2]; // Tinh phan tu thu i trong day Fibo
	}
}
