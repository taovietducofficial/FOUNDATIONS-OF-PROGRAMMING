# Level 4
# Bài 10: Nhập vào 1 số nguyên dương n. Liệt kê n số Fibonacci đầu tiên.

def nhap(): # Hàm nhập số nguyên dương n
    n = int(input("Nhập số nguyên dương n: ")) # Nhập số nguyên dương n
    return n 

def fibonacci(i, a1, a2): # Hàm tính số fibonacci thứ i
    if i == 1 or i == 2: # Nếu i = 1 hoặc i = 2
        return 1 # Trả về 1
    return a1 + a2 # Ngược lại trả về tổng của 2 số fibonacci trước đó

def liet_ke_so_fibonacci(n): # Hàm liệt kê n số fibonacci đầu tiên
    a1, a2 = 1, 1 # Khởi tạo 2 số fibonacci đầu tiên
    for i in range(1, n + 1): # Lặp từ 1 đến n
        f = fibonacci(i, a1, a2) # Gọi hàm fibonacci
        print(f, end=" ")
        a2, a1 = a1, f  # Cập nhật giá trị cho vòng lặp tiếp theo

# Chương trình chính 
n = nhap() # Gọi hàm nhập
liet_ke_so_fibonacci(n) # Gọi hàm liệt kê số fibonacci
