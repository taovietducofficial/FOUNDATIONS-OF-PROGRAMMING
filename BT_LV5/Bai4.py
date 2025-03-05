# Level 5
# Bài 4: Nhập vào 1 số nguyên dương n. Liệt kê các số chính phương từ 1 đến n.

import math

def nhap():
    """Hàm nhập một số nguyên dương từ bàn phím."""
    return int(input("Nhập số nguyên dương n: "))

def xuat(a):
    """Hàm xuất số nguyên a."""
    print(a, end=" ")

def chinhphuong(n):
    """Hàm kiểm tra số chính phương."""
    if n < 1: # Số chính phương phải lớn hơn hoặc bằng 1
        return False
    sqrt_n = int(math.sqrt(n)) # Lấy căn bậc hai của n
    return sqrt_n * sqrt_n == n # Kiểm tra n có bằng bình phương của căn bậc hai của n không

def lietkecp(n):
    """Hàm liệt kê các số chính phương từ 1 đến n."""
    for i in range(1, n + 1): # Duyệt từ 1 đến n
        if chinhphuong(i): # Kiểm tra i có phải số chính phương không
            xuat(i)

# Chương trình chính
n = nhap()
lietkecp(n)
