#include<stdio.h>

int a[int(1e6)], n;

void main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	
	int min = a[0], max = a[1] - a[0];
	for(int i = 1; i < n; i++)
	{
		if(max < a[i] - min)
			max = a[i] - min;
		if(min > a[i])
			min = a[i];
	}
	
	printf("%d", max);
}
