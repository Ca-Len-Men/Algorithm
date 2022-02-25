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