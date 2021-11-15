"""Hướng dẫn
Input : 1 2 3 4 3 3 1
Output: 1 2 3 5 1 2 1
Giải thích Output :
- Ở phần tử thứ 3 ( mang giá trị 4 ) : bên trái có dãy con 1 2 3 tăng dần, bên phải có dãy con 3 giảm dần ( tất cả nhỏ hơn 4 )
- Như vậy, độ dốc của phần tử thứ 3 ( mang giá trị 4 ) bằng tổng độ dài của DÃY CON TĂNG BÊN TRÁI dài nhất và DÃY CON GIẢM BÊN PHẢI dài nhất cộng thêm 1.
- 3 + 1 + 1 = 5
SỬ DỤNG THUẬT TOÁN : QUY HOẠCH ĐỘNG
Cần thêm 2 mảng một chiều ( asc, des )
- Mảng một chiều asc : mỗi phần tử thể hiện chiều dài của một dãy con tăng ( từ trái sang phải )
- Mảng một chiều des : mỗi phần tử thể hiện chiều dài của một dãy con giảm ( từ phải sang trái )
Bước 1 : Gán mảng asc, duyệt từ 0 -> n - 1
    - Phần tử đầu tiên mang giá trị 1
    - Phần tử thứ i : nếu a[i] > a[i - 1] thì asc[i] = asc[i - 1] + 1, ngược lại thì asc[i] = 1
Bước 2 : Gán mảng des, duyệt từ n - 1 -> 0
    - Phần tử thứ n - 1 mang giá trị 1
    - Phần tử thứ i : nếu a[i] > a[i + 1] thì des[i] = des[i + 1] + 1, ngược lại thì des[i] = 1
    
Kết quả bài toán :
    - Là một mảng có phần tử thứ i bằng tổng giá trị của asc[i], des[i] trừ đi 1
Với input sau : 1 2 3 4 3 3 1
Mảng asc là   : 1 2 3 4 1 1 1
Mảng des là   : 1 1 1 2 1 2 1
Đáp án là     : 1 2 3 5 1 2 1
"""

n = int(input())        #Nhập số phần tử mảng
a = input().split()     #Nhập chuỗi trên một dòng, cắt chuỗi thành mảng

for i in range(n):      #Chuyển mảng chuỗi thành mảng số
    a[i] = int(a[i])

asc = []                #Tạo mảng rỗng
des = []                #Tạo mảng rỗng

asc.append(1)           #Thêm phần tử vào cuối mảng
for i  in range(1, n):  #Gán mảng asc
    if a[i] > a[i - 1]:
        asc.append(asc[i - 1] + 1)
    else:
        asc.append(1)

a.reverse()             #Đảo mảng

des.append(1)           #Thêm phần tử vào cuối mảng
for i in range(1, n):   #Gán mảng des
    if a[i] > a[i - 1]:
        des.append(des[i - 1] + 1)
    else:
        des.append(1)

des.reverse()           #Đảo mảng

for i in range(n):      #Xuất đáp án
    print(asc[i] + des[i] - 1, "", end = "")
