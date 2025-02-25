# Level 4
# Bài 6: Nhập vào 1 số nguyên dương n. Đếm số nguyên tố từ 1 đến n.

def nhap(): # Hàm nhập một số nguyên dương
    return int(input()) # Trả về giá trị nhập vào

def xuat(kq): # Hàm xuất kết quả
    print(kq) # In ra kết quả

def demso(n): # Hàm đếm số nguyên tố từ 1 đến n
    dem = 0 # Khởi tạo biến đếm
    for i in range(1, n + 1): # Duyệt từ 1 đến n
        if nguyento(i): # Nếu i là số nguyên tố
            dem += 1 # Tăng biến đếm lên 1
    return dem

def nguyento(n): # Hàm kiểm tra số nguyên tố
    dem = 0 # Khởi tạo biến đếm
    for i in range(1, n + 1): # Duyệt từ 1 đến n
        if n % i == 0: # Nếu n chia hết cho i
            dem += 1 # Tăng biến đếm lên 1
    return dem == 2 # Trả về True nếu n có đúng 2 ước, ngược lại False

# Chương trình chính
n = nhap() # Nhập số nguyên dương n
kq = demso(n) # Gọi hàm đếm số nguyên tố từ 1 đến n
xuat(kq)
