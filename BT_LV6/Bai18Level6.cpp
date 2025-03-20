#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);
void xuatMang(int n,int A[]);
void hoanDoi(int &a,int &b);
void daoNguocMang(int n, int A[]);

int main()
{
	int n, A[100];
	nhapMang(n,A);
	daoNguocMang(n,A);
	xuatMang(n,A);
	return 0;
}


void nhapMang(int &n, int A[])
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}

void xuatMang(int n,int A[])
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}

void hoanDoi(int &a,int &b)
{
	int c=a;
	a=b;
	b=c;
}

void daoNguocMang(int n, int A[])
{
	int x=0;
	int y=n-1;
	while(x<y)
	{
		hoanDoi(A[x],A[y]);
		x++;
		y--;
	}
}
