# Level 5
# Bài 7: Nhập vào 1 số nguyên dương n. Đếm số nguyên tố từ 1 đến n.

def nhap():
    return int(input("Nhập số nguyên dương n: "))

def xuat(kq):
    print(kq)

def demso(n):
    dem = 0
    for i in range(1, n + 1):  # Duyệt từ 1 đến n
        if nguyento(i) and (n % i == 0):  # Nếu là số nguyên tố và chia hết cho n
            dem += 1  # Tăng biến đếm
    return dem

def nguyento(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):  # Kiểm tra từ 2 đến căn bậc hai của n
        if n % i == 0:
            return False
    return True

# Chương trình chính
n = nhap()
kq = demso(n)
xuat(kq)
