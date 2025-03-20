# Level 6
# Viết bằng Python 
# Bài 2: Nhập vào một mảng số thực gồm n phần tử. Tính tổng các phần tử của mảng và xuất kết quả.

def nhap_mang():  # Hàm nhập mảng số thực từ người dùng
    n = int(input("Nhập số phần tử của mảng: "))  # Nhập số phần tử của mảng
    A = list(map(float, input("Nhập các phần tử của mảng, cách nhau bởi dấu cách: ").split()))  # Nhập các phần tử
    return n, A  # Trả về số phần tử và danh sách A


def tinh_tong(n, A):  # Hàm tính tổng các phần tử của mảng
    return sum(A)  # Sử dụng hàm sum để tính tổng


def xuat(kq):  # Hàm xuất kết quả
    print(f"Tổng các phần tử của mảng: {kq}")


# Chương trình chính
if __name__ == "__main__":  # Kiểm tra nếu đây là chương trình chính
    n, A = nhap_mang()  # Gọi hàm nhập mảng
    kq = tinh_tong(n, A)  # Gọi hàm tính tổng
    xuat(kq)  # Gọi hàm xuất kết quả