# Độ dài con dốc
Cho dãy số nguyên `a` gồm `n` phần tử. Độ dốc của phần tử thứ `i` được tính như sau :
- `l` là vị trí xa nhất bên trái `a[i]` sao cho các phần tử trong đoạn `[l, i]` tăng dần.
- `r` là vị trí xa nhất bên phải `a[i]` sao cho các phần tử trong đoạn `[i, r]` giảm dần.
- Độ dốc của phần tử thứ `i` bằng số phần tử trong đoạn `[l, r]`.

## Chú ý:
- Dãy sau đây là tăng dần : `1, 2, 3, 4, 5`.
- Dãy sau đây không phải tăng dần : `1, 3, 3, 4, 5`.

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - Dòng đầu tiên là một số nguyên dương `n` ( `0 < n ≤ 10<sup>7<\sup>` ).
    - Dòng thứ hai gồm `n` số nguyên dương `a[i]` ( `-10<sup>9<\sup> ≤ a[i] ≤ 10<sup>9<\sup>` ).
- **[Đầu ra]** 


## Ví dụ:
- Với `cat_a = -5`, `mouse = 2` và `cat_b = 10` thì `who_would_win(cat_a, mouse, cat_b) = "Cat A"`
- Với `cat_a = 3`, `mouse = 5` và `cat_b = 5` thì `who_would_win(cat_a, mouse, cat_b) = "Cat B"`