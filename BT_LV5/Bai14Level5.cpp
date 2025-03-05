#include<iostream>
using namespace std;

void nhap(int &n,int &k);
void xuat(int co,int C);
bool hople(int n,int k);
int giaithua(int n);
int tinhtohop(int n,int k,int&C);

int main()
{
	int n,k,C;
	nhap(n,k);
	int co=tinhtohop(n,k,C);
	xuat(co,C);
	return 0;
}
void nhap(int &n,int &k)
{
	cin>>n>>k;
}
void xuat(int co,int C)
{
	if (co==0)
	{
		cout<<"BO SO KHONG HOP LE";
	}
	else 
	{
		cout<<C;
	}
}
bool hople(int n,int k)
{
	if(k<=n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int giaithua(int n)
{
	int a=1;
	for (int i=1;i<=n;i++)
	{
		a=a*i;
	}
	return a;
}
int tinhtohop(int n,int k,int&C)
{
	int x=n-k;
	if (hople(n,k))
	{
		C=( (giaithua(n)) / ( (giaithua(k)) * (giaithua(x))) );
		return true;
	}
	else 
	{
		return false;
	}
}
