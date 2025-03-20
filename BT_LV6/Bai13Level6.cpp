#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void nhap(int &x);
void xuat(int kq);
int timVitri(int n, int A[],int x);

int main()
{
	int n, A[100],x;
	nhapMang(n,A);
	nhap(x);
	int kq=timVitri(n,A,x);
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

int timVitri(int n, int A[],int x)
{
	int vitri=-1;
	for (int i=0;i<n;i++)
		if(A[i]==x)
			vitri=i;
	return vitri;
}
