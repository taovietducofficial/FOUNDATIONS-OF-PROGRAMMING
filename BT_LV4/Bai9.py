# Level 4
# Bài 9: Nhập vào 1 số nguyên dương n. Kiểm tra xem các chữ số của n có phải là số giảm dần hay không?

def nhap(): # Hàm nhập số nguyên dương n
    n = int(input("Nhập số nguyên dương n: "))  # Nhập số nguyên dương n
    return n 

def kiem_tra(n): # Hàm kiểm tra các chữ số của n có giảm dần hay không
    truoc = 10  # Giá trị lớn hơn bất kỳ chữ số nào (0-9)
    while n != 0: # Lặp khi n khác 0
        sau = n % 10 # Lấy chữ số cuối cùng của n
        if sau > truoc: # Nếu chữ số sau lớn hơn chữ số trước   
            return False 
        truoc = sau # Cập nhật chữ số trước bằng chữ số sau
        n //= 10  # Loại bỏ chữ số cuối cùng của n
    return True

def xuat(kq): # Hàm xuất
    if kq:
        print("CÁC CHỮ SỐ GIẢM DẦN")
    else: # Ngược lại nếu kq = False
        print("CÁC CHỮ SỐ KHÔNG GIẢM DẦN")

# Chương trình chính
n = nhap() # Gọi hàm nhập
kq = kiem_tra(n) # Gọi hàm kiểm tra
xuat(kq)
