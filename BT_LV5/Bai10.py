# Level 5
# Bài 10: Nhập vào số nguyên n. Tính tổng S = 1! + 2! + ... + n!.

def nhap(): # Nhập số nguyên n
    return int(input("Nhập số nguyên n: "))

def xuat(kq): # Xuất kết quả
    print(kq)

def giaithua(a): # Tính giai thừa của a (a!) = 1 * 2 * 3 * ... * a
    b = 1
    for i in range(1, a + 1): # Tính từ 1 đến a + 1 (a + 1 không được tính)
        b *= i # Nhân từng số từ 1 đến a
    return b

def tinhtong(n): # Tính tổng S = 1! + 2! + 3! + ... + n!
    S = 0
    for i in range(1, n + 1): # Tính từ 1 đến n + 1 (n + 1 không được tính)
        S += giaithua(i) # Cộng từng giai thừa từ 1 đến n
    return S

if __name__ == "__main__": # Kiểm tra chương trình chính
    n = nhap() # Nhập số nguyên n
    kq = tinhtong(n) # Tính tổng S
    xuat(kq)
