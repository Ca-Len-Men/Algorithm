#include<stdio.h>

void QuickSort(int* a, int left, int right);
int BinarySearch(int* a, int n, int x);
void swap(int& a, int& b);

int a[int(1e6)];
void main()
{
	int n, s, temp;
	scanf("%d%d", &n, &s);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &temp);
		if(BinarySearch(a, n, temp) == -1)
			printf("NO\n");
		else
			printf("YES\n");
	}
}

int BinarySearch(int* a, int n, int x)
{
	int left = 0, right = n - 1, mid;
	
	while(left <= right){
		mid = (left + right) / 2;
		if(x == a[mid])
			return mid;
		else if(x < a[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	
	return -1;
}

void QuickSort(int* a, int left, int right)
{
	if(left >= right)
		return;
	
	int i = left, j = right;
	int x = a[(left + right) / 2];
	
	do{
		while(a[i] < x)
			i++;
		while(a[j] > x)
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
