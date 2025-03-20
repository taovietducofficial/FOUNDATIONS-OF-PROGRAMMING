# Level 6
# Viết bằng Python
# Bài 3: Viết chương trình nhập vào một mảng A gồm n phần tử. Tính trung bình cộng các phần tử của mảng A và xuất kết quả ra

def nhap_mang(): # Nhập mảng từ bàn phím 
    n = int(input("Nhập số phần tử của mảng: ")) # Số phần tử của mảng
    A = list(map(float, input("Nhập các phần tử của mảng: ").split())) # Nhập các phần tử của mảng
    return n, A
 
def tinh_tbc(n, A): # Tính trung bình cộng của mảng
    if n == 0: # Nếu mảng rỗng thì không có trung bình cộng
        return 0
    return sum(A) / n # Tính trung bình cộng của mảng

def xuat(kq): # Xuất kết quả
    print("Trung bình cộng của mảng là:", kq) # Xuất kết quả

def main():
    n, A = nhap_mang() # Nhập mảng từ bàn phím
    kq = tinh_tbc(n, A) # Tính trung bình cộng của mảng
    xuat(kq)

if __name__ == "__main__":
    main() # Chương trình chính
