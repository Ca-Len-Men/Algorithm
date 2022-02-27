#include<stdio.h>

int main()
{
	long long n, k = 0;
	scanf("%lld", &n);
	
  	for(n /= 2; n > 0; n /= 2)
		k += n;
	printf("%lld", k);
}
