#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void xuat(int kq);
int timSoChan1(int n, int A[]);

int main()
{
	int n, A[100];
	nhapMang(n,A);
	int kq=timSoChan1(n,A);
	xuat(kq);
	return 0;
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

int timSoChan1(int n, int A[])
{
	for (int i=0;i<n;i++)
		if(A[i]%2==0)
			return A[i];
	return -1;
}
