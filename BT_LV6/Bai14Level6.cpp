#include <iostream>
using namespace std;

void nhapMang(int &n, double A[]);
void xuat(double kq);
double timSoAm1(int n, double A[]);

int main()
{
	int n; 
	double A[100];
	nhapMang(n,A);
	double kq=timSoAm1(n,A);
	xuat(kq);
	return 0;
}

void nhapMang(int &n, double A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}

void xuat(double kq)
{
	cout<<kq;
}

double timSoAm1(int n, double A[])
{
	for (int i=0;i<n;i++)
		if(A[i]<0.0)
			return A[i];
	return 1.0;
}
