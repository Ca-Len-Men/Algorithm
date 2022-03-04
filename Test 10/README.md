# Xóa phần tử
   **Cho mảng số nguyên `a` gồm `n` phần tử. Bạn được phép xóa phần tử lớn nhất hoặc nhỏ nhất trong mảng.
   Hãy tìm cách dùng ít lần xóa nhất sao cho tổng các phần tử còn lại bằng `0`.<br>**
   [DELARR](https://luyencode.net/problem/DELARR)

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên là một số nguyên dương `n` ( 0 < n ≤ 10<sup>6</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương a<sub>i</sub> ( -10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup> ).**
- **[Đầu ra]** 
    - **Một dòng duy nhất là số lần xóa ít nhất.**

## Ví dụ:
- **[Input]**
   - `6`
   - `-4 -5 1 2 -3 10`
- **[Output]**
   - `3`
- **[Giải thích]**
   - Lần lượt xóa các phần tử `-5, -4, 10`

## Giải bài tập
   Sắp xếp mảng tăng dần với thuật toán có độ phức tạp `O(n log n)`.<br>
   Tạo một biến `sum` là tổng cách phần tử trong mảng.<br>
   `L` là vị trí đầu và `R` là vị trí cuối mảng ( `L = 0` và `R = n - 1` ).
   - Điều kiện dừng `left > right` :
      - `sum > 0` : giảm `sum` đi a<sub>R</sub>, và xóa phần tử cuối `R--`, quay lại bước đầu và tiếp tục so sánh `sum`.
      - `sum < 0` : giảm `sum` đi a<sub>L</sub>, và xóa phần tử đầu `L++`, quay lại bước đầu và tiếp tục so sánh `sum`.
      - `sum = 0` : kết thúc bài toán, in ra giá trị `n - (right - left + 1)` ( `right - left + 1` là số phần tử trong đoạn [left, right] ).
   - **Độ phức tạp : `O(n log n)`**
