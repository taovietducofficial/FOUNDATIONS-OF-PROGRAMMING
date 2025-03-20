// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 6
// Viết bằng C++
// Bài 1: Nhập vào một mảng số nguyên gồm n phần tử. Xuất mảng vừa nhập.

#include <iostream>
using namespace std;

void nhapMang(int &n, int A[]);  
void xuatMang(int n, int A[]); 

int main()
{
	int n,A[100];
	nhapMang(n,A); // nhập mảng A gồm n phần tử
	xuatMang(n,A); // xuất mảng A gồm n phần tử
	return 0;
}

void nhapMang(int &n, int A[]) // nhập mảng A gồm n phần tử 
{
	cin>>n; // nhập số phần tử của mảng
	for(int i=0;i<n;i++) // nhập từng phần tử của mảng
		cin>>A[i]; 
}

void xuatMang(int n, int A[]) // xuất mảng A gồm n phần tử 
{ 
	for(int i=0;i<n;i++) // xuất từng phần tử của mảng
		cout<<A[i]<<" "; 
}
