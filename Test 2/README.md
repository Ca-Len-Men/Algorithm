# Độ dài con dốc
   Cho dãy số nguyên `a` gồm `n` phần tử ( phần tử đầu tiên bắt đầu tại vị trí là `1` ). Với mỗi truy vấn được cho hai số nguyên dương `l` và `r`.
   Nhiệm vụ của bạn là tính tổng các phần tử trong đoạn `[l, r]`.

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên là hai số nguyên dương `n` và `s` ( 0 < n ≤ 10<sup>6</sup>, 0 < s ≤ 10<sup>6</sup> ).**
    - **Dòng thứ hai gồm `n` số nguyên dương `a[i]` ( -10<sup>9</sup> ≤ a[i] ≤ 10<sup>9</sup> ).**
    - **`s` dòng tiếp theo, mỗi dòng gồm hai số nguyên dương `l` và `r` ( 0 < l ≤ r ≤ n ≤ 10<sup>6</sup> ).**
- **[Đầu ra]** 
    - Gồm `s` dòng, mỗi dòng là một kết quả của truy vấn tương ứng.

## Ví dụ:
- **[Input]**
   - `10 5`
   - `2 1 3 -7 5 8 8 4 6 -6`
   - `1 2`
   - `3 7`
   - `1 5`
   - `2 6`
   - `8 10`
- **[Output]**
   - `3`
   - `13`
   - `4`
   - `10`
   - `4`

# Giải bài tập
   Tạo một dãy `b` thỏa mãn `b[0] = 0` và `b[i] = a[1] + a[2] + ... + a[i]`
   Như vậy, tổng các phần tử `a[l] + ... + a[r] = ( a[1] + ... + a[l] + ... + a[r] ) - ( a[1] + ... + a[l - 1] ) = b[r] - b[l - 1]`
   - **Độ phức tạp** : `O(s)`
