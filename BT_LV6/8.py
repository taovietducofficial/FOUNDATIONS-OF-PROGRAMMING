# Level 6
# Viết bằng Python
# Bài 8: Viết chương trình nhập vào một số nguyên dương n và mảng A có n phần tử. Kiểm tra xem trong mảng A có phần tử nào bằng 0 hay không?

def nhap_mang():
    n = int(input("Nhập số phần tử: ")) # Nhập số phần tử của mảng
    A = list(map(int, input("Nhập các phần tử của mảng: ").split())) # Nhập các phần tử của mảng
    return n, A # Trả về số phần tử và mảng A

def xuat(kq): # Xuất kết quả kiểm tra
    print(kq)

def kiem_tra(A): # Kiểm tra xem trong mảng A có phần tử nào bằng 0 hay không
    return 0 in A

if __name__ == "__main__":
    n, A = nhap_mang() # Nhập mảng
    kq = kiem_tra(A) # Kiểm tra mảng
    if kq:
        print("Có phần tử bằng 0")
    else:
        print("Không có phần tử bằng 0")
    xuat(kq)