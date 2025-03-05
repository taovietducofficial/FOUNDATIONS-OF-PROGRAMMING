# Level 5
# Bài 2: Nhập vào 1 số nguyên dương n. Đếm số hoàn hảo từ 1 đến n.

def nhap():
    return int(input("Nhập số nguyên dương n: "))

def xuat(kq):
    print(kq)

def hoanhao(n):
    tong = sum(i for i in range(1, n) if n % i == 0)  # Tính tổng các ước của n
    return tong == n  # Kiểm tra nếu tổng bằng chính nó thì là số hoàn hảo

def demso(n):
    dem = sum(1 for i in range(1, n + 1) if hoanhao(i))  # Đếm số hoàn hảo từ 1 đến n
    return dem

if __name__ == "__main__":
    n = nhap()
    kq = demso(n)
    xuat(kq)