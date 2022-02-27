#include<stdio.h>

int Compare(int a, int b);
void QuickSort(int* a, int left, int right);
void swap(int& a, int& b);

int a[1000000];
void main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	
	QuickSort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

void QuickSort(int* a, int left, int right)
{
	if(left >= right)
		return;
	
	int i = left, j = right;
	int pilot = a[(i + j) / 2];
	
	do{
		while(Compare(a[i], pilot) < 0)
			i++;
		while(Compare(a[j], pilot) > 0)
			j--;
		
		if(i <= j)
		{
			if(i != j)
				swap(a[i], a[j]);
			i++;
			j--;
		}
	}while(i < j);
	
	QuickSort(a, left, j);
	QuickSort(a, i, right);
}
			
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int Compare(int a, int b)
{
	if(a > 0 && b > 0)
		return a - b;
	return b - a;
}
