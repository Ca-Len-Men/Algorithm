##Tìm đường đi trong mê cung
Input : 4 1 1

.....*...

****.*.*.

.....*...

***....*+

Output :

.....****

****.****

****.*...

****...*.

Giải thích :
- Dòng đầu tiên gồm : số dòng của mê cung, vị trí x, y là điểm bắt đầu
- N dòng tiếp theo thể hiện mê cung bằng mảng ký tự hai chiều

Nhân vật : chỉ được phép di chuyển theo 4 hướng cơ bản
          + Trái, phải, lên, xuống
Mô tả mê cung :
'.' : ô trống được phép đi
'*' : bức tường
'+' : đích đến

#Yêu cầu : tìm ra đường đi ngắn nhất để đến được đích
