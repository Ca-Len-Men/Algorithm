#include<stdio.h>
#define size int(1e3) //double : 10^3
#define FOR(i, a, b) for(int i = a; i < b; i++)	//i : [a, b)

int a[size][size], b[size][size];
void initB();

void main()
{
	int n, m, answer;
	scanf("%d%d", &n, &m);
	FOR(i, 0, n)
		FOR(j, 0, m)
			scanf("%d", a[i] + j);
	
	//Tạo bảng b
	initB();
	//Tìm max trong cột cuối cùng của bảng b
	answer = b[0][m - 1];
	FOR(i, 1, n)
		if(answer < b[0][i])
			answer = b[0][i];
	printf("%d", answer);
}

void initB()
{
	//Cột đầu tiên của bảng b
	FOR(i, 0, n)
		b[i][0] = a[i][0];
	
	int max;
	FOR(j, 1, m)
		FOR(i, 0, n)
		{
			max = a[i][j - 1];
			if(i > 0 && max < a[i - 1][j - 1])
				max = a[i - 1][j - 1];
			if(i < n - 1 && max < a[i + 1][j - 1])
				max = a[i + 1][j - 1];
		
			b[i][j] = max + a[i][j];
		}
}
