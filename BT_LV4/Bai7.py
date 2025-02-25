# Level 4
# Bài 7: Nhập vào 1 số nguyên dương n. Kiểm tra xem các chữ số của n có phải là số chẵn hay không?

def nhap():  # Hàm nhập một số nguyên dương n
    return int(input("Nhập số nguyên dương n: "))

def xetchusochan(n): # Hàm kiểm tra các chữ số của n có phải đều chẵn không
    while n != 0: # Duyệt từ hàng đơn vị đến hàng cao nhất
        tam = n % 10 # Lấy chữ số cuối cùng
        if tam % 2 != 0: # Nếu chữ số lẻ
            return False # Trả về False
        n //= 10 # Loại bỏ chữ số cuối cùng
    return True # Trả về True

def xuat(kq): # Hàm xuất kết quả
    if kq: # Nếu tất cả các chữ số của n đều chẵn
        print("CÁC CHỮ SỐ ĐỀU CHẴN")
    else: # Ngược lại
        print("CÁC CHỮ SỐ KHÔNG CHẴN")

# Chương trình chính
n = nhap() # Nhập số nguyên dương n
kq = xetchusochan(n) # Gọi hàm kiểm tra các chữ số của n có phải đều chẵn không
xuat(kq)
