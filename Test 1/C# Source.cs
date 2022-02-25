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