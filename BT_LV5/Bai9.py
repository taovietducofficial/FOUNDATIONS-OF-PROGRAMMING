# Level 5
# Bài 9: Nhập vào 4 số nguyên a,b,c,d. Tính tổng 2 phân số a/b + c/d rồi rút gọn kết quả.

import math

def nhap():
    a, b, c, d = map(int, input().split()) # Nhập 4 số nguyên
    return a, b, c, d

def xuat(kq, tu, mau): # Xuất kết quả
    if kq == 0: # Nếu kết quả bằng 0
        print("LOI PHEP TINH")
    else: # Ngược lại
        if tu == 0:
            print(0)
        elif mau == 1:
            print(tu)
        elif mau == -1:
            print(-tu)
        else:
            print(f"{tu}/{mau}")

def tinhucln(a, b):
    return math.gcd(a, b)

def tinhtongphanso(a, b, c, d):
    if b == 0 or d == 0: # Nếu mẫu b = 0 hoặc d = 0
        return 0, 0, 0  # Lỗi phép tính
    tu = a * d + b * c
    mau = b * d
    if tu != 0: # Nếu tử khác 0
        u = tinhucln(tu, mau)
        tu //= u
        mau //= u
        if (tu > 0 and mau < 0) or (tu < 0 and mau < 0): # Nếu tử dương mẫu âm hoặc tử âm mẫu âm
            tu = -tu
            mau = -mau
    return 1, tu, mau

if __name__ == "__main__":
    a, b, c, d = nhap()
    kq, tu, mau = tinhtongphanso(a, b, c, d)
    xuat(kq, tu, mau)
