# Level 6
# Viết bằng Python
# Bài 1: Nhập vào một mảng số nguyên gồm n phần tử. Xuất mảng vừa nhập.

def nhap_mang():  # Hàm nhập mảng từ người dùng
    n = int(input("Nhập số phần tử của mảng: "))  # Nhập số phần tử của mảng
    A = list(map(int, input("Nhập các phần tử của mảng, cách nhau bởi dấu cách: ").split()))  
    # Nhập từng phần tử của mảng
    return n, A  # Trả về số phần tử và danh sách A


def xuat_mang(n, A):  # Hàm xuất mảng
    print("Mảng vừa nhập:", " ".join(map(str, A)))  
    # Xuất mảng dưới dạng chuỗi cách nhau bởi dấu cách


# Chương trình chính
if __name__ == "__main__":  # Kiểm tra nếu đây là chương trình chính
    n, A = nhap_mang()  # Gọi hàm nhập mảng
    xuat_mang(n, A)  # Gọi hàm xuất mảng
