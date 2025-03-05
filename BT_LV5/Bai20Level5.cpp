#include <iostream>
using namespace std;

void nhap(int &n);
void xuat(int kq);
void phantich(int n);
bool nguyento(int n);

int main()
{
	int n;
	nhap(n);
	phantich(n);
	return 0;
}

void nhap(int &n)
{
	cin>>n;
}

void xuat(int kq)
{
	cout<<kq<<" ";
}

void phantich(int n)
{
	int i=1;
	while(n!=1)
	{
		if ( n%i==0 && nguyento(i) )
		{
			xuat(i);
			n=n/i;
			i=1;
		}
		i++;
	}
}

bool nguyento(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if (dem==2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
