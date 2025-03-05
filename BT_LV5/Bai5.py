# Level 5
# Bài 5: Nhập vào 1 số nguyên dương n. Liệt kê các số hoàn hảo từ 1 đến n.

def nhap(): # nhập số nguyên dương n từ bàn phím
    return int(input("Nhập số nguyên dương n: "))

def xuat(n): # xuất số nguyên dương 
    print(n, end=" ")

def hoanhao(n): # kiểm tra số hoàn hảo 
    tong = sum(i for i in range(1, n) if n % i == 0) # tính tổng các ước của n
    return tong == n # nếu tổng các ước của n bằng n thì n là số hoàn hảo

def lietkehh(n): # liệt kê số hoàn hảo từ 1 đến n
    for i in range(1, n + 1): # duyệt từ 1 đến n
        if hoanhao(i): # nếu i là số hoàn hảo
            xuat(i)

if __name__ == "__main__":
    n = nhap()
    lietkehh(n) # liệt kê số hoàn hảo từ 1 đến n