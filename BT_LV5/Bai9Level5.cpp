// ĐỀ BÀI CỦA BÀI NÀY LÀ GÌ?
// Level 5
// Bài 9: Nhập vào 4 số nguyên a,b,c,d. Tính tổng 2 phân số a/b + c/d rồi rút gọn kết quả.

#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &c, int &d); // nhập 4 số nguyên a, b, c, d
void xuat(int kq, int tu, int mau);        // xuất kết quả
int tinhucln(int a, int b);                // tính ước chung lớn nhất
int tinhtongphanso(int a, int b, int c, int d, int &tu, int &mau); // tính tổng phân số a/b + c/d

int main()
{
    int a, b, c, d, tu, mau;
    nhap(a, b, c, d);
    int co = tinhtongphanso(a, b, c, d, tu, mau);
    xuat(co, tu, mau);
    return 0;
}

void nhap(int &a, int &b, int &c, int &d)
{
    cin >> a >> b >> c >> d;
}

void xuat(int kq, int tu, int mau)
{
    if (kq == 0) // Kiểm tra kết quả
    {
        cout << "LOI PHEP TINH";
    }
    else if (kq == 1) // Xuất kết quả
    {
        if (tu == 0)
            cout << 0;
        else if (mau == 1)
            cout << tu;
        else
            cout << tu << "/" << mau;
    }
}

int tinhucln(int a, int b) // Tính ước chung lớn nhất
{
    while (b != 0) // Thuật toán Euclid
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int tinhtongphanso(int a, int b, int c, int d, int &tu, int &mau) // Tính tổng phân số
{
    if (b == 0 || d == 0) // Kiểm tra mẫu số có hợp lệ không
    {
        return 0;
    }

    tu = a * d + b * c; 
    mau = b * d;

    if (tu != 0)
    {
        int u = tinhucln(tu, mau);
        tu /= u;
        mau /= u;

        // Đảm bảo mẫu số luôn dương
        if (mau < 0)
        {
            tu = -tu;
            mau = -mau;
        }
    }
    return 1;
}

