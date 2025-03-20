# Level 6
# Viết bằng Python
# Bài 7: Viết chương trình nhập vào một số nguyên dương n. Tính dãy Fibonacci có n phần tử

def nhap():
    return int(input())  # Nhập số nguyên dương từ bàn phím

def tim_day_fibo(n):
    if n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    A = [0, 1]  # Khởi tạo dãy Fibonacci
    for i in range(2, n):
        A.append(A[i - 1] + A[i - 2])  # Tính phần tử thứ i trong dãy Fibo
    return A

def xuat_mang(A):
    print(" ".join(map(str, A)))  # Xuất mảng dãy Fibonacci

if __name__ == "__main__":
    n = nhap()
    A = tim_day_fibo(n)
    xuat_mang(A)