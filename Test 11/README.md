# Tìm kiếm nhị phân
   **Cho mảng số nguyên `a` gồm `n` phần tử.<br>
   Với một dãy gồm `s` phần tử, hãy kiểm tra xem các giá trị đó có thuộc mảng `a` không.<br>
   Nếu có thì in ra `YES`, ngược lại in ra `NO`.**
   
## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên gồm hai số nguyên dương `n` và `s` ( 0 < n ≤ 10<sup>6</sup>, 0 < s ≤ 10<sup>6</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương a<sub>i</sub> ( -10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup> ).**
    - **`s` dòng tiếp theo, mỗi dòng là một số nguyên ( -10<sup>9</sup> ≤ s<sub>i</sub> ≤ 10<sup>9</sup> ).**
- **[Đầu ra]** 
    - **Ghi ra `s` dòng, mỗi dòng là `YES` hoặc `NO`.**

## Ví dụ:
- **[Input]**
   - `10 5`
   - `2 0 -5 8 -7 4 1 9 -8 20`
   - `1`
   - `2`
   - `19`
   - `-5`
   - `3`
- **[Output]**
   - `YES`
   - `YES`
   - `NO`
   - `YES`
   - `NO`

## Giải bài tập
   - Sử dụng các thuật toán sắp xếp mảng có độ phức tạp `O(n log n)`.
   - Sử dụng thuật toán tìm kiếm nhị phân để kiểm tra giá trị trong mảng
   - **Độ phức tạp : `O(s log n)`**
