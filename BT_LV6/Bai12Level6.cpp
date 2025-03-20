#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void nhap(int &x);
void xuat(int kq);
int kiemTra(int n, int A[],int x);

int main()
{
	int n, A[100],x;
	nhapMang(n,A);
	nhap(x);
	int kq=kiemTra(n,A,x);
	xuat(kq);
	return 0;
}

void nhap(int &x)
{
	cin>>x;
}

void nhapMang(int &n, int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}

void xuat(int kq)
{
	cout<<kq;
}

int kiemTra(int n, int A[],int x)
{
	for (int i=0;i<n;i++)
		if(A[i]==x)
			return i;
	return -1;
}
