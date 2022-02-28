# Sắp xếp đặc biệt
   **Cho mảng số nguyên `a` gồm `n` phần tử.<br>
   Hãy sắp xếp mảng `a` sao cho các phần tử dương ở đầu, các phần tử âm ở cuối, số 0 ở giữa và các phần tử dương tăng dần, các phần tử âm giảm dần.**


## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên là một số nguyên dương `n` ( 0 < n ≤ 10<sup>6</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương a<sub>i</sub> ( -10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup> ).**
- **[Đầu ra]** 
    - **Một dòng duy nhất là mảng `a` đã được sắp xếp.**

## Ví dụ:
- **[Input]**
   - `10`
   - `2 0 -5 8 -7 4 1 9 -8 0`
- **[Output]**
   - `1 2 4 8 9 0 0 -5 -7 -8`

## Giải bài tập
   Hàm so sánh hai phần tử int Compare(a, b) :
   - Trả về giá trị âm nếu `a < b`.
   - Trả về giá trị dương nếu `a > b`.
   - Trả về giá trị 0 nếu `a == b`.<br><br>
   Xét hai số `a` và `b` :
   - Nếu là hai số dương ( `a, b > 0` ) : số lớn hơn sẽ lớn hơn số còn lại.
      - `a = 5` và `b = 7` : trả về -2 ( a < b ).
      - `a = 6` và `b = 4` : trả về 2 ( a > b ).
      - Như vậy ta trả về `a - b`.
   - Còn lại : số bé hơn sẽ lớn hơn số còn lại.
      - `a = -5` và `b = -7` : trả về -2 ( a < b ).
      - `a = -3` và `b = 3` : trả về 6 ( a > b ).
      -  `a = 0` và `b = -5` : trả về -5 ( a < b ).
      -  `a = 3` và `b = 0` : trả về -3 ( a < b ).
      -  Như vậy ta trả về `b - a`.
   - Sử dụng các thuật toán có độ phức tạp `O(n log n)` để giải bài toán này.
   - **Độ phức tạp : `O(n log n)`**