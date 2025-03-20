# Level 6
# Viết bằng Python
# Bài 4: Viết chương trình nhập vào một mảng A gồm n phần tử. Tính trung bình cộng các phần tử của mảng A chia hết cho 5 và xuất kết quả ra

def nhap_mang(): # Hàm nhập mảng A và số phần tử n
    n = int(input("Nhập số phần tử của mảng: ")) # Nhập số phần tử của mảng
    A = list(map(int, input("Nhập các phần tử của mảng: ").split()))
    return n, A

def tinh_tbc5(n, A): # Hàm tính trung bình cộng các phần tử chia hết cho 5
    phan_tu_chia_het_cho_5 = [x for x in A if x % 5 == 0]
    if not phan_tu_chia_het_cho_5: # Kiểm tra xem có phần tử nào chia hết cho 5 không
        return 0
    return sum(phan_tu_chia_het_cho_5) / len(phan_tu_chia_het_cho_5)

def xuat(kq): # Hàm xuất kết quả
    print("Trung bình cộng các phần tử chia hết cho 5 là:", kq)

def main(): # Hàm chính
    n, A = nhap_mang() # Gọi hàm nhập mảng
    kq = tinh_tbc5(n, A) # Gọi hàm tính trung bình cộng
    xuat(kq)

if __name__ == "__main__":
    main()