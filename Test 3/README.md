# Phân tích số chẵn
   Cho một số nguyên dương `n`. Hãy tìm giá trị `k` lớn nhất thỏa mãn `n!` là bội của 2<sup>k</sup>.


## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Một dòng duy nhất là số nguyên dương `n` ( 0 < n ≤ 10<sup>18</sup> ).**
- **[Đầu ra]** 
    - Một dòng duy nhất là giá trị `k`.

## Ví dụ:
- **[Input]**
   - `10`
- **[Output]**
   - 8

# Giải bài tập
   Với `n = 10` và `n! = 1 x 2 x ... x 10`.
   Thực hiện theo ba bước sau :
    - Bước 1 : Lượt bỏ những số lẻ                 => `2 x 4 x ... x 10`
    - Bước 2 : Rút từng số `2` ra khỏi biểu thức   => 2<sup>5</sup> x `1 x 2 x ... x 5`
    - Bước 3 : Quay lại bước 1 cho đến khi không còn số chẵn trong biểu thức.
   
   Với `n = 10` ta được giá trị `k = 5 + 2 + 1 = 8`
   Với `n = 100` ta được giá trị `k = 50 + 25 + 12 + 6 + 3 + 1 = 97`
   - Độ phức tạp : `O(log n)`
