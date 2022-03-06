# Cặp đôi đặc biệt
   **Cho mảng số nguyên `a` gồm `n` phần tử.<br>
   Hãy tìm giá trị lớn nhất của a<sub>j</sub> - a<sub>i</sub> với `i < j`.**

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên là một số nguyên dương `n` ( 0 < n ≤ 10<sup>6</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương a<sub>i</sub> ( -10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup> ).**
- **[Đầu ra]** 
    - **Một dòng duy nhất là giá trị lớn nhất tìm được.**

## Ví dụ:
- **[Input]**
   - `10`
   - `2 1 7 3 4 3 5 0 -5 -2`
   -  2 1 1 1 1 1 1 0 -5 -5
- **[Output]**
   - `6`
- **[Giải thích]**
   - Lấy a<sub>2</sub> - a<sub>1</sub> là `7 - 1 = 6`

## Giải bài tập
   - Tạo mảng `b` thỏa mãn b<sub>i</sub> là giá trị nhỏ nhất của dãy `a` trong đoạn `[0, i]`.
   - Tìm giá trị lớn nhất của a<sub>i</sub> - b<sub>i - 1</sub> ( 1 ≤ i < n ).
   - **Độ phức tạp : `O(n)`**
