#include<stdio.h>

int a[int(1e7)];
void reverse(int* a, int n);

void main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	
	reverse(a, n - k);
	reverse(a + n - k, k);
	reverse(a, n);
	
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

void reverse(int* a, int n)
{
	int temp;
	for(int i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
