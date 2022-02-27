# Phân tích số chẵn
   Cho một số nguyên dương `n`. Hãy tìm giá trị `k` lớn nhất thỏa mãn `a``b`

## Chú ý:
   - Dãy sau đây là tăng dần : `1, 2, 3, 4, 5`.
   - Dãy sau đây không phải tăng dần : `1, 3, 3, 4, 5`.

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên là một số nguyên dương `n` ( 0 < n ≤ 10<sup>7</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương `a[i]` ( -10<sup>9</sup> ≤ a[i] ≤ 10<sup>9</sup> ).**
- **[Đầu ra]** 
    - Một dòng duy nhất là độ dốc của tất cả phần tử trong dãy `a`.

## Ví dụ:
- **[Input]**
   - `10`
   - `2 1 3 -7 5 8 8 4 6 -6`
- **[Output]**
   - `2 1 3 1 2 3 2 1 3 1`

# Giải bài tập
   Tạo hai dãy `L` và `R` như sau :
   - `L[i]` là độ dốc phía bên trái của phần tử `a[i]`
   - `R[i]` là độ dốc phía bên phải của phần tử `a[i]`
   Như vậy độ dốc của phần tử `a[i]` bằng `L[i] + R[i] - 1`
   
   Với `n = 10` và `a = [2, 1, 3, -7, 5, 8, 8, 4, 6, -6]`, ta có được hai dãy `L` và `R` sau :
   - `L = [1, 1, 2, 1, 2, 3, 1, 1, 2, 1]`
   - `R = [2 ,1 ,2 ,1 ,1 ,1 ,2 ,1 ,2 ,1]`
   Như vậy ta sẽ được kết quả là `[2, 1, 3, 1, 2, 3, 2, 1, 3, 1]`
   - **Độ phức tạp** : `O(n)`
