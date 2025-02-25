# Level 4
# Bài 5: Nhập vào 1 số nguyên dương n. Tìm chữ số lớn nhất của n.

def nhap(): # Hàm nhập một số nguyên dương
    return int(input()) # Trả về giá trị nhập vào

def timmax(n): # Hàm tìm chữ số lớn nhất của số nguyên dương n
    max_digit = 0 # Khởi tạo chữ số lớn nhất
    while n != 0: # Lặp khi n khác 0
        digit = n % 10 # Lấy chữ số cuối cùng của n
        if max_digit < digit: # Nếu chữ số lớn nhất nhỏ hơn chữ số vừa lấy
            max_digit = digit # Gán chữ số lớn nhất bằng chữ số vừa lấy
        n //= 10
    return max_digit # Trả về chữ số lớn nhất

def xuat(kq):
    print(kq)

# Chương trình chính
n = nhap() # Nhập số nguyên dương n
kq = timmax(n) # Gọi hàm tìm chữ số lớn nhất của n
xuat(kq) # Xuất kết quả
