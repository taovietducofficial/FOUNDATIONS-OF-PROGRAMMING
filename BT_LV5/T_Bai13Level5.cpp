#include <iostream>
using namespace std;

void nhap(int&n,int&k);
void xuat(int kq);
long long tinhC(int n,int k);
long long giaithua(int a);

int main()
{
	int n,k;
	nhap(n,k);
	long long kq=tinhC(n,k);
	xuat(kq);
	return 0;
}

long long giaithua(int a)
{
	long long S=1;
	for(int i=1;i<=a;i++)
	{
		S*=i;
	}
	return S;
}

long long tinhC(int n,int k)
{
	long long C;
	C=giaithua(n)/(giaithua(k)*(giaithua(n-k)));
	return C;
}

void nhap(int&n,int&k)
{
	do
		cin>>n>>k;
	while(k>n);
}

void xuat(int kq)
{
	cout<<kq;
}
