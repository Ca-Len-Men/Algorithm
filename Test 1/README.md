# Bài Toán Mèo Bắt Chuột

> Author: [VuTungMinh](https://codelearn.io/profile/508906)

## Mô Tả Bài Toán
Có hai chú mèo đứng ở hai vị trí bất kỳ đang nhăm nhe một con chuột, cả hai đều muốn bắt được con chuột này. Được biết tốc độ của hai chú mèo đều tương đương nhau và xuất phát cùng lúc, hãy cho biết chú mèo nào sẽ bắt được con chuột trước.

## Chú ý:
- Nếu cả hai chú mèo đều bắt được chú chuột cùng lúc, chú chuột sẽ thoát được, khi đó hãy trả về `"The mouse has escaped"`
- Vị trí của các con vật được thể hiện bằng các mốc giá trị trên trục số.

## Ví dụ:
- Với `cat_a = -5`, `mouse = 2` và `cat_b = 10` thì `who_would_win(cat_a, mouse, cat_b) = "Cat A"`
- Với `cat_a = 3`, `mouse = 5` và `cat_b = 5` thì `who_would_win(cat_a, mouse, cat_b) = "Cat B"`


## Đầu vào/Đầu ra:

- **[Thời gian]**
   - 0.5s với C++ 
   - 3s với Java và C#
   - 4s với Python, Go và JavaScript
- **[Đầu vào]Long cat_a, cat_b, mouse**
    - **-10<sup>18</sup> <= cat_a <= 10<sup>18</sup>**
    - **-10<sup>18</sup> <= cat_b <= 10<sup>18</sup>**
    - **-10<sup>18</sup> <= mouse <= 10<sup>18</sup>**
- **[Đầu ra] String** 