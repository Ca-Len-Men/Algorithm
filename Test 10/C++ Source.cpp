#include<stdio.h>

void QuickSort(int* arr, int left, int right);
void swap(int& a, int& b);

int a[int(1e6)];
void main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
        sum += a[i];
    }

    QuickSort(a, 0, n - 1);

    int left = 0, right = n - 1;
    while (left <= right) {
        if (sum == 0)
            break;
        else if (sum > 0) {
            sum -= a[right];
            right--;
        } else {
            sum -= a[left];
            left++;
        };
    }

    printf("%d", n - (right - left + 1));
}

void QuickSort(int* arr, int left, int right)
{
    if (left >= right)
        return;

    int i = left, j = right;
    int x = a[(left + right) / 2];

    do {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;

        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }

    } while (i < j);

    QuickSort(a, left, j);
    QuickSort(a, i, right);
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
