#include<stdio.h>

int a[25], n, k, sc = 0;
void score(int idx, int kTemp, int saveScore = 0);

void main()
{
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	
	score(0, 0);
	printf("%d", sc);
}

void score(int idx, int kTemp, int saveScore)
{
	if(idx >= n){
		if(Score < saveScore)
			Score = saveScore;
		return;
	}
	
	saveScore += a[idx];
	
	if(kTemp == k){
		if(Score < saveScore)
			Score = saveScore;
		return;
	}
	
	score(idx + 1, kTemp + 1, saveScore);
	score(idx + 2, kTemp + 1, saveScore);
}
