#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void xuat(int kq);
int timMax(int n, int A[]);

int main()
{
	int n, A[100];
	nhapMang(n,A);
	int kq=timMax(n,A);
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

int timMax(int n, int A[])
{
	int max=A[0];
	for (int i=1;i<n;i++)
		if(max<A[i])
			max=A[i];
	return max;
}
