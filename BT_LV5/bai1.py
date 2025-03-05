# Level 5
# Bài 1: Nhập vào 1 số nguyên dương n. Liệt kê các số nguyên tố từ 1 đến n.

def nhap(): # Hàm nhập giá trị n
    return int(input("Nhập số nguyên dương n: "))

def xuat(a): # Hàm xuất giá trị a
    print(a, end=" ")

def nguyento(n): # Hàm kiểm tra số nguyên tố
    if n < 2: # Số nguyên tố phải lớn hơn 1
        return False
    for i in range(2, int(n**0.5) + 1): # Số nguyên tố phải chia hết cho 1 và
        if n % i == 0: # chính nó (n chia hết cho 1 và chính nó)
            return False
    return True

def lietkenguyento(n): # Hàm liệt kê số nguyên tố từ 1 đến n
    for i in range(1, n + 1): # Duyệt từ 1 đến n
        if nguyento(i):
            xuat(i)

if __name__ == "__main__":
    n = nhap()
    lietkenguyento(n)
