# Level 6
# Viết bằng Python
# Bài 10: Viết chương trình nhập vào một số nguyên dương n và mảng A có n phần tử. Tính số phần tử trong mảng A bằng x (x nhập từ bàn phím).

def nhap_mang():
    n = int(input()) # Nhập số phần tử của mảng
    A = list(map(int, input().split())) # Nhập các phần tử của mảng
    return n, A

def nhap_x(): # Nhập giá trị x
    return int(input()) # Nhập giá trị x

def dem_x(n, A, x): # Đếm số lần xuất hiện của x trong mảng A
    return A.count(x)

def xuat(kq):
    print(kq) # Xuất kết quả

def main():
    n, A = nhap_mang() # Nhập mảng
    x = nhap_x()
    kq = dem_x(n, A, x) # Đếm số lần xuất hiện của x trong mảng A
    xuat(kq)

if __name__ == "__main__":
    main()
