# Level 5
# Bài 3: Nhập vào 1 số nguyên dương n. Đếm số nguyên tố từ 1 đến n.

def nhap():
    """Hàm nhập một số nguyên dương từ bàn phím."""
    n = int(input("Nhập số nguyên dương n: "))
    return n

def xuat(kq):
    """Hàm xuất kết quả ra màn hình."""
    print(kq)

def nguyento(n):
    """Hàm kiểm tra số nguyên tố."""
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):  # Chỉ cần kiểm tra đến căn bậc hai của n
        if n % i == 0:
            return False
    return True

def demso(n):
    """Hàm đếm số nguyên tố từ 1 đến n."""
    dem = 0
    for i in range(1, n + 1): # Duyệt từ 1 đến n
        if nguyento(i): # Kiểm tra i có phải số nguyên tố không
            dem += 1
    return dem

# Chương trình chính
n = nhap()
kq = demso(n)
xuat(kq)