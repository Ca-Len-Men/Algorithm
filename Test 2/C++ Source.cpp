#include<stdio.h>

int a[1000001] { 0 };

void main()
{
	int n, s, l, r;

	scanf("%d%d", &n, &s);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", a + i);
		a[i] += a[i - 1];
	}

	for(int i = 0; i < s; i++)
	{
		scanf("%d%d", &l, &r);
		printf("%d\n", a[r] - a[l - 1]);
	}
}
