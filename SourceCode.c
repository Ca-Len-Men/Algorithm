#include<stdio.h>

int a[200000];
int asc[200000], des[200000];

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", a + i);
    
    asc[0] = 1;
    for(i = 1; i < n; i++)
        if(a[i] > a[i - 1])
            asc[i] = asc[i - 1] + 1;
    	else
            asc[i] = 1;
    
    des[n - 1] = 1;
    for(i = n - 2; i >= 0; i--)
        if(a[i] > a[i + 1])
            des[i] = des[i + 1] + 1;
    	else
            des[i] = 1;
    
    for(i = 0; i < n; i++)
        printf("%d ", asc[i] + des[i] - 1);
}
