#include<stdio.h>

void QuickSort(int* arr, int left, int right);
void swap(int& a, int& b);
int a[int(1e6)];  //10^6

void main()
{
	int n, count = 0, temp;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	
	QuickSort(a, 0, n - 1);
	
	int i = 0;
	while(i < n)
	{
		temp = a[i];
		while(i < n && temp == a[i])
			i++;
		count++;
	}
	
	printf("%d", count);
}

void QuickSort(int* arr, int left, int right)
{
	if(left >= right)
		return;
	
	int i = left, j = right;
	int x = a[(left + right) / 2];
	
	do{
		while(a[i] > x)
			i++;
		while(a[j] < x)
			j--;
		
		if(i <= j){
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
