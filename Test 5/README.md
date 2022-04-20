# Tìm kiếm trên cây nhị phân
   **Cho mảng số nguyên `a` gồm `n` phần tử.<br>
   Với mỗi giá trị `k`, hãy tìm phần tử a<sub>i</sub> có chỉ số `i` nhỏ nhất thỏa mãn k ≤ a<sub>i</sub>, nếu không tìm thấy thì in ra `-1`.**

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên là hai số nguyên dương `n` và `s` ( 0 < n ≤ 10<sup>6</sup>, 0 < s ≤ 10<sup>6</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên a<sub>i</sub> ( -10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup> ).**
    - **`s` dòng tiếp theo, mỗi dòng là một số nguyên `k` ( -10<sup>9</sup> ≤ k ≤ 10<sup>9</sup> ).**
- **[Đầu ra]** 
    - **In ra `s` dòng, mỗi dòng là phần tử tìm được ứng với giá trị `k` đã cho.**

## Ví dụ:
- **[Input]**
   - `10 5`
   - `2 0 -5 8 -7 4 1 9 -8 0`
   - `1`
   - `3`
   - `-5`
   - `9`
   - `10`
- **[Output]**
   - `2`
   - `8`
   - `2`
   - `9`
   - `-1`

## Giải bài tập
   Xây dựng cây nhị phân như sau :
   ![Binary Search Tree](https://github.com/Ca-Len-Men/Algorithm/blob/Learning-Test/Test%205/Picture.png)
   - Với `k = 1` :
        - Bắt đầu với nút 1 : k bé hơn nút 1 => tồn tại phần tử lớn hơn bằng k.
        - Kiểm tra nút 2 : k bé hơn nút 2 => đi vào nút 2
        - Kiểm tra nút 4 : k bé hơn nút 4 => đi vào nút 4
        - Kiểm tra nút 6 : k bé hơn nút 6 => đi vào nút 6
        - Phần tử 2 : k bé hơn 2 => In ra 2
   - Với `k = 9` :
      	- Bắt đầu với nút 1 : k bé hơn nút 1 => tồn tại phần tử lớn hơn bằng k.
        - Kiểm tra nút 2 : k lớn hơn nút 2
        - Kiểm tra nút 3 : k bé hơn bằng nút 3 => đi vào nút 3
        - Kiểm tra nút 5 : k bé hơn bằng nút 5 => đi vào nút 5
        - Kiểm tra nút 8 : k lớn hơn nút 8
        - Kiểm tra phần tử 9 : k bé hơn bằng 9 => In ra 9
   - Với `k = 10` :
        - Bắt đầu với nút 1 : k lớn hơn nút 1 => Không tồn tại, in ra -1.<br>
   - Chi phí cho mỗi lần tìm kiếm : `O(log n)`
   - **Độ phức tạp : `O(s log n)`**
