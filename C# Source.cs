/*Hướng dẫn
Input : 1 2 3 4 3 3 1
Output: 1 2 3 5 1 2 1

Giải thích Output :
-Ở phần tử thứ 3 ( mang giá trị 4 ) : bên trái có dãy con 1 2 3 tăng dần, bên phải có dãy con 3 giảm dần ( tất cả nhỏ hơn 4 )
-Như vậy, độ dốc của phần tử thứ 3 ( mang giá trị 4 ) bằng tổng độ dài của DÃY CON TĂNG BÊN TRÁI dài nhất và DÃY CON GIẢM BÊN PHẢI dài nhất cộng thêm 1.
- 3 + 1 + 1 = 5

SỬ DỤNG THUẬT TOÁN : QUY HOẠCH ĐỘNG
Cần thêm 2 mảng một chiều ( asc, des )
-Mảng một chiều asc : mỗi phần tử thể hiện chiều dài của một dãy con tăng ( từ trái sang phải )
-Mảng một chiều des : mỗi phần tử thể hiện chiều dài của một dãy con giảm ( từ phải sang trái )

Bước 1 : Gán mảng asc, duyệt từ 0 -> n - 1
    - Phần tử đầu tiên mang giá trị 1
    - Phần tử thứ i : nếu a[i] > a[i - 1] thì asc[i] = asc[i - 1] + 1, ngược lại thì asc[i] = 1

Bước 2 : Gán mảng des, duyệt từ n - 1 -> 0
    - Phần tử thứ n - 1 mang giá trị 1
    - Phần tử thứ i : nếu a[i] > a[i + 1] thì des[i] = des[i + 1] + 1, ngược lại thì des[i] = 1


Kết quả bài toán :
    -Là một mảng có phần tử thứ i bằng tổng giá trị của asc[i], des[i] trừ đi 1

Với input sau : 1 2 3 4 3 3 1
Mảng asc là   : 1 2 3 4 1 1 1
Mảng des là   : 1 1 1 2 1 2 1
Đáp án là     : 1 2 3 5 1 2 1
*/

using System;

namespace Source
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[2000000];
            int[] asc = new int[2000000];
            int[] des = new int[2000000];
            int n;

            n = Convert.ToInt32(Console.ReadLine());
            string[] arr = Console.ReadLine().Split(' ');
            for (int i = 0; i < n; i++)
                a[i] = Convert.ToInt32(arr[i]);

            asc[0] = 1;
            for (int i = 1; i < n; i++)
                if (a[i] > a[i - 1])
                    asc[i] = asc[i - 1] + 1;
                else
                    asc[i] = 1;

            des[n - 1] = 1;
            for (int i = n - 2; i >= 0; i--)
                if (a[i] > a[i + 1])
                    des[i] = des[i + 1] + 1;
                else
                    des[i] = 1;

            for (int i = 0; i < n; i++)
                Console.Write("{0} ", asc[i] + des[i] - 1);
        }
    }
}
