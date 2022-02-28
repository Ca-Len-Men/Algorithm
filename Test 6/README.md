# Gà con ăn thóc
   **Trên một sân chữ nhật gồm `n` dòng, `m` cột, số lượng hạt thóc trên mỗi ô là a<sub>i, j</sub>.
   Một con gà bắt đầu tại vị trí bất kì trong cột `1` và sẽ di chuyển sang cột `n`.
   Ở ô a<sub>i, j</sub>, con gà có thể di chuyển sang một trong ba ô a<sub>i, j+1</sub>, a<sub>i-1, j+1</sub>, a<sub>i+1, j+1</sub>.
   Hãy tính số hạt thóc nhiều nhất mà con gà có thể ăn sau khi di chuyển từ cột `1` sang cột `n`**
   
## Lưu ý
   - Con gà không thể di chuyển ra khỏi sân chữ nhật.

## Đầu vào/Đầu ra:
- **[Thời gian]**
   - 1s với C++ 
   - 3s với Java và C#
   - 5s với Python, Go và JavaScript
- **[Đầu vào]**
    - **Dòng đầu tiên gồm hai số nguyên dương `n` và `m` ( 0 < n, m ≤ 10<sup>3</sup> ).**
    - **`n` dòng tiếp theo, mỗi dòng gồm `m` số nguyên a<sub>i, j</sub> ( 0 ≤ a<sub>i, j</sub> ≤ 10<sup>3</sup> ).**
- **[Đầu ra]** 
    - **Một dòng duy nhất là số hạt thóc nhiều nhất mà con gà có thể ăn.**

## Ví dụ:
- **[Input]**
   - `4 5`
   - `2 0 5 1 3`
   - `6 1 2 7 5`
   - `8 0 2 0 1`
   - `5 3 3 1 6`
- **[Output]**
   - `26`
- **[Giải thích]**
    Con đường mà gà sẽ đi như sau :
    - `0 0 5 0 0`
    - `0 1 0 7 5`
    - `8 0 0 0 0`
    - `0 0 0 0 0`

## Giải bài tập
   Tạo một bảng `b` thỏa mãn b<sub>i, j</sub> là số lượng thóc nhiều nhất mà gà có thể ăn khi đi đến ô a<sub>i, j</sub>.<br>
   => Như vậy số lượng thóc nhiều nhất mà gà có thể ăn được là giá trị lớn nhất trong cột `m` của bảng `b`.<br>
   - Cách tạo bảng `b` như sau :
      - Khi bắt đầu tại cột `1`, số lượng thóc nhiều nhất khi ở cột `1` cũng là số lượng tại ô đó => b<sub>i, 1</sub> = a<sub>i, 1</sub>.
      - Để đi đến ô a<sub>i, j</sub>, con gà phải đi qua một trong ba ô a<sub>i, j-1</sub>, a<sub>i-1, j-1</sub>, a<sub>i+1, j-1</sub>.
      - Như vậy b<sub>i, j</sub> được tính bằng cách lấy giá trị lớn nhất của ba ô trước đó cộng cho a<sub>i, j</sub>.<br>
    Với `input` của đề bài, ta có được bảng `b` như sau :
    - `2 6  14 15 24`
    - `6 9  11 21 26`
    - `8 8  13 14 22`
    - `5 11 14 15 21`<br>
    Như vậy ta có số lượng thóc nhiều nhất là `26`.
   - **Độ phức tạp : `O(n x m)`**
