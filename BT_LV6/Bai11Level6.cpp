#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void nhap(int &x);
void xuat(bool kq);
bool kiemTra(int n, int A[],int x);

int main()
{
	int n, A[100],x;
	nhapMang(n,A);
	nhap(x);
	bool kq=kiemTra(n,A,x);
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

void xuat(bool kq)
{
	cout<<kq;
}

bool kiemTra(int n, int A[],int x)
{
	for (int i=0;i<n;i++)
		if(A[i]==x)
			return true; 
	return false;
}
