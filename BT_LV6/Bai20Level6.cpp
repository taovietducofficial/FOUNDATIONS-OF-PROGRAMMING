#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void nhap(int&x,int&y);
void xuat(int a);
void lietKe(int n, int A[],int x,int y);

int main()
{
	int n, A[100],x,y;
	nhapMang(n,A);
	nhap(x,y);
	lietKe(n,A,x,y);
	return 0;
}


void nhapMang(int &n, int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}

void nhap(int&x,int&y)
{
	cin>>x>>y;
}

void xuat(int a)
{
	cout<<a<<" ";
}

void lietKe(int n, int A[],int x,int y)
{
	for(int i=0;i<n;i++)
		if(A[i]>=x && A[i]<=y && A[i]%2==0)
			xuat(A[i]);
}
