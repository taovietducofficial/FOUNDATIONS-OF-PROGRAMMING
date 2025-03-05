# Level 5
# Bài 8: Nhập vào 1 số nguyên dương n. Tìm ước số lẻ lớn nhất của n.

def nhap():
    return int(input("Nhập số nguyên dương n: "))

def timuocmax(n):
    max_uoc = 1  # Khởi tạo ước số lẻ lớn nhất với giá trị nhỏ nhất có thể
    for i in range(1, n + 1):  # Duyệt từ 1 đến n
        if n % i == 0 and i % 2 != 0:  # Nếu i là ước số lẻ của n
            max_uoc = i  # Cập nhật ước số lẻ lớn nhất
    return max_uoc

def xuat(kq):
    print(kq)

# Chương trình chính
n = nhap()
kq = timuocmax(n)
xuat(kq)
