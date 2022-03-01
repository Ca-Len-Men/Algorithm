# Di chuyển phần tử
   **Cho mảng số nguyên `a` gồm `n` phần tử. Hãy di chuyển `k` phần tử cuối về đầu mảng.**
   
## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên gồm hai số nguyên dương `n` và `k` ( 0 < k ≤ n ≤ 10<sup>7</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương a<sub>i</sub> ( -10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup> ).**
- **[Đầu ra]** 
    - **Một dòng duy nhất là mảng `a` sau khi di chuyển các phần tử.**

## Ví dụ:
- **[Input]**
   - `10 6`
   - `2 0 -5 8 -7 4 1 9 -8 0`
- **[Output]**
   - `-7 4 1 9 -8 0 2 0 -5 8`

## Giải bài tập
   - Với mảng `2 0 -5 8 -7 4 1 9 -8 0` và `k = 6` :
      - Bước 1 : đảo `k` phần tử cuối     : `2 0 -5 8 0 -8 9 1 4 -7`
      - Bước 2 : đảo `n - k` phần tử đầu  : `8 -5 0 2 0 -8 9 1 4 -7`
      - Bước 3 : đảo mảng                 : `-7 4 1 9 -8 0 2 0 -5 8`
   - **Độ phức tạp : `O(n)`**
