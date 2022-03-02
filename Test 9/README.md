# Bài toán đếm
   **Cho mảng số nguyên `a` gồm `n` phần tử. Hãy đếm số lượng các số đôi một khác nhau có trong mảng `a`.**

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên là một số nguyên dương `n` ( 0 < n ≤ 10<sup>6</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương a<sub>i</sub> ( -10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup> ).**
- **[Đầu ra]**
    - **Một dòng duy nhất là số lượng các số đôi một khác nhau có trong mảng `a`.**

## Ví dụ:
- **[Input]**
   - `10`
   - `2 0 2 1 5 7 2 1 4 0`
- **[Output]**
   - `6`
- **[Giải thích]**
   - Các chữ số đôi một khác nhau là `0 1 2 4 5 7`

## Giải bài tập
   - Sử dụng các thuật toán có độ phức tạp `O(n log n)` để sắp xếp mảng.
   - Sau khi sắp xếp, các phần tử trùng nhau sẽ liền kề nhau, duyệt qua mảng và đếm số lượng các số đôi một khác nhau.
   - **Độ phức tạp : `O(n log n)`**
