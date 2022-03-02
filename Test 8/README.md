# Bài thi
   **Kỳ thi HSG dành cho lớp 10 mà Tí tham gia có `n` câu, câu thứ `i` có số điểm là a<sub>i</sub>.<br>
   Quy định của cuộc thi là không cho phép thí sinh bỏ hai câu liên tiếp.<br>
   Nếu bỏ qua câu thứ `i` và `i + 1` thì các câu thứ `i` trở đi sẽ không được tính điểm.<br>
   Và khả năng của Tí chỉ có thể làm được `k` câu. Hãy giúp Tí tính số điểm cao nhất đạt được.**


## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên gồm hai số nguyên dương `n` và `k` ( 0 < k ≤ n ≤ 25 ).**
    - **Dòng thứ hai gồm `n` số nguyên dương a<sub>i</sub> ( 0 < a<sub>i</sub> ≤ 10<sup>3</sup> ).**
- **[Đầu ra]** 
    - **Một dòng duy nhất là điểm số tối đa Tí đạt được.**

## Ví dụ:
- **[Input]**
   - `6 3`
   - `2 1 3 5 1 3`
- **[Output]**
   - `10`
- **[Giải thích]**
   - Tí làm được ba câu có số điểm là `2 + 3 + 5 = 10`

## Giải bài tập
   - Lặp qua tất cả các trường hợp và tìm ra số điểm tối đa : sử dụng thuật toán Vét cạn ( Quay lui )
   - **Độ phức tạp : `O(2^n)`**
