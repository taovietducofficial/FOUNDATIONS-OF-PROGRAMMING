# Level 4
# Bài 8: Nhập vào 1 số nguyên dương n. Kiểm tra xem các chữ số của n có phải là số tăng dần hay không?

def nhap():
    """Nhập số nguyên dương n từ bàn phím"""
    return int(input("Nhập số nguyên dương n: "))

def kiemtra(n):
    """Kiểm tra xem các chữ số của n có phải là số tăng dần hay không"""
    truoc = 10  # Gán giá trị ban đầu là 10 (lớn hơn mọi chữ số từ 0-9)
    
    while n != 0:  # Lặp cho đến khi n bằng 0
        sau = n % 10  # Lấy chữ số cuối cùng của n
        if sau > truoc:  # Nếu chữ số hiện tại lớn hơn chữ số trước đó, không phải tăng dần
            return False
        truoc = sau  # Cập nhật giá trị trước đó
        n //= 10  # Loại bỏ chữ số cuối cùng của n
    
    return True  # Nếu duyệt hết mà không vi phạm, trả về True

def xuat(kq):
    """Xuất kết quả ra màn hình"""
    if kq:
        print("CÁC CHỮ SỐ TĂNG DẦN")
    else:
        print("CÁC CHỮ SỐ KHÔNG TĂNG DẦN")

# Chương trình chính
n = nhap()  # Nhập số nguyên dương
kq = kiemtra(n)  # Kiểm tra xem các chữ số có tăng dần không
xuat(kq)  # Xuất kết quả
