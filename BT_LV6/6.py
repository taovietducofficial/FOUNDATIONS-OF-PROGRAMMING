# Level 6
# Viết bằng Python
# Bài 6: Viết chương trình nhập vào một mảng A gồm n phần tử. Đếm số phần tử của mảng A là số âm và xuất kết quả ra.


def nhap_mang():
    n = int(input())  # Nhập số phần tử của mảng
    A = list(map(int, input().split()))  # Nhập từng phần tử của mảng
    return n, A

def dem_so_am(n, A):
    dem = sum(1 for x in A if x < 0)  # Đếm số phần tử âm trong mảng
    return dem

def xuat(kq):
    print(kq)  # Xuất kết quả

if __name__ == "__main__":
    n, A = nhap_mang()
    kq = dem_so_am(n, A)
    xuat(kq)
