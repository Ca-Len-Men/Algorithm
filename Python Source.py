"""Hướng dẫn
Input : 3 4
1 2 4 5
3 1 4 2
2 3 4 5
Output: 14
Giải thích Output :
- Con gà lần lượt đi qua các cột sau : 4 3 4
- Ô (1, 4) có giá trị 5, ô (2, 3) có giá trị 4, ô (3, 4) có giá trị 5
- Tổng số hạt thóc nhiều nhất mà gà có thể ăn : 5 + 4 + 5 = 14
SỬ DỤNG THUẬT TOÁN : QUY HOẠCH ĐỘNG
Cần một mảng hai chiều gồm n dòng m cột : QHD[][]
Bước 1 : Gán dòng đầu tiên của QHD bằng với dòng đầu của a
Bước 2 : Gán giá trị cho các dòng tiếp theo
    - Ở dòng thứ i, gán mỗi cột j như sau :
        + Tạo biến max là giá trị lớn nhất của QHD[i - 1][j - 1], QHD[i - 1][j], QHD[i - 1][j + 1]
        + Gán : QHD[i][j] = max + a[i][j]
    
Kết quả bài toán :
    - Là phần tử lớn nhất trên dòng cuối cùng của QHD
Với input sau : 3 4
1 2 4 5
3 1 4 2
2 3 4 5
Bước 1 : tạo mảng hai chiều QHD, gán giá trị dòng đầu tiên của QHD
1 2 4 5
0 0 0 0
0 0 0 0
Bước 2 : gán theo công thức, cuối cùng ta được mảng hai chiều QHD là
1  2  4  5
5  5  9  7
7 12 13 14
Kết quả : 14
"""
