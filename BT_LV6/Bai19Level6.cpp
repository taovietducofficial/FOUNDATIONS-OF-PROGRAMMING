#include <iostream>
using namespace std;

void nhapMang(int &n, double A[]);
void nhap(double&x,double&y);
void xuatMang(int n,double A[]);
void lietKe(int n, double A[],double x,double y);

int main()
{
	int n;
	double A[100],x,y;
	nhapMang(n,A);
	nhap(x,y);
	lietKe(n,A,x,y);
	return 0;
}


void nhapMang(int &n, double A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}

void nhap(double&x,double&y)
{
	cin>>x>>y;
}

void xuat(int a)
{
	cout<<a;
}

void lietKe(int n, double A[],double x,double y)
{
	for(int i=0;i<n;i++)
		if(A[i]>=x && A[i]<=y)
			xuat(A[i]);
}
