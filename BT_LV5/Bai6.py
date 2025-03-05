# Level 5
# Bài 6: Nhập vào 1 số nguyên dương n. Đếm số chính phương từ 1 đến n.

import math

def nhap():  # nhập số nguyên dương n từ bàn phím
    return int(input("Nhập số nguyên dương n: "))

def xuat(kq): # xuất số nguyên dương 
    print(kq)

def chinhphuong(n): # kiểm tra số chính phương
    if n < 1: # nếu n < 1 thì không phải số chính phương
        return False
    return int(math.sqrt(n)) ** 2 == n # kiểm tra n có phải là số chính phương hay không

def demso(n): # đếm số chính phương từ 1 đến n
    dem = sum(1 for i in range(1, n + 1) if chinhphuong(i)) # đếm số chính phương từ 1 đến n
    return dem # trả về số lượng số chính phương từ 1 đến n

if __name__ == "__main__":
    n = nhap()
    kq = demso(n) # đếm số chính phương từ 1 đến n
    xuat(kq)