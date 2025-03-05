#include <iostream>
using namespace std;
void lietke();
void tachso(int n,int&a,int&b);

int main()
{
	lietke();
	return 0;
}
void lietke()
{
	int a,b;
	for(int i=10;i<=99;i++)
	{
		tachso(i,a,b);
		if (a*b==2*(a+b))
		{
			cout<<i<<" ";
		}
	}
}
void tachso(int n,int&a,int&b)
{
	a=n/10;
	b=n-a*10;
}

