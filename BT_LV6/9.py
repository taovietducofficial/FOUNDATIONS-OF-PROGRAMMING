# Level 6
# Viết bằng Python
# Bài 9: Viết chương trình nhập vào một số nguyên dương n và mảng A có n phần tử. Tính tổng các phần tử trong mảng A lớn hơn x (x nhập từ bàn phím).

def nhap_mang(): # Nhập mảng 
    n = int(input("Nhập số phần tử: ")) # Nhập số phần tử của mảng
    A = list(map(int, input("Nhập các phần tử của mảng: ").split())) # Nhập các phần tử của mảng
    return n, A

def nhap_x(): # Nhập giá trị x
    return int(input("Nhập giá trị x: ")) # Nhập giá trị x

def xuat(kq):
    print(kq)

def tinh_tong(A, x): # Tính tổng các phần tử lớn hơn x
    return sum(a for a in A if a > x) # Tính tổng các phần tử lớn hơn x

if __name__ == "__main__":
    n, A = nhap_mang()  # Nhập mảng 
    x = nhap_x()
    kq = tinh_tong(A, x) # Tính tổng các phần tử lớn hơn x
    xuat(kq)
