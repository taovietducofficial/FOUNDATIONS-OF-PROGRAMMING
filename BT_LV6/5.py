# Level 6
# Viết bằng Python
# Bài 5: Viết chương trình nhập vào một mảng A gồm n phần tử. Tính tổng các phần tử của mảng A là số chẵn và xuất kết quả ra.

def nhap_mang():
    n = int(input())  # Nhập số phần tử của mảng
    A = list(map(int, input().split()))  # Nhập từng phần tử của mảng
    return n, A

def tinh_tong_chan(n, A):
    S = sum(x for x in A if x % 2 == 0)  # Tính tổng các số chẵn trong mảng
    return S

def xuat(kq):
    print(kq)  # Xuất kết quả

if __name__ == "__main__":
    n, A = nhap_mang()
    kq = tinh_tong_chan(n, A)
    xuat(kq)
