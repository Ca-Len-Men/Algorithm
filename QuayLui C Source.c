/*

*/

#include<stdio.h>

int a[1000][1000];
void QuayLui_GaAnThoc(int row, int col, int max_row, int max_col, int save_value, int* max_value);
int sothoc_max(int row, int col);

int main()
{
	int n, m, i, j;
	scanf("%d%d", &n, &m);
	
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	
	printf("%d", sothoc_max(n, m));
	
	return 0;
}

int sothoc_max(int row, int col)
{
	int max = 0;
	QuayLui_GaAnThoc(0, 0, row, col, 0, &max);
	return max;
}

void QuayLui_GaAnThoc(int row, int col, int max_row, int max_col, int save_value, int* max_value)
{
	if(row == max_row)
	{
		if(save_value > *max_value)
			*max_value = save_value;
		return;
	}
	
	int i, j;
	
	if(row == 0)
	{
		for(i = 0; i < max_col; i++)
			QuayLui_GaAnThoc(1, i, max_row, max_col, a[0][i], max_value);
	}else{
		i = col == 0 ? 0 : col - 1;
		j = col == max_col - 1 ? col : col + 1;
		
		for(; i <= j; i++)
			QuayLui_GaAnThoc(row + 1, i, max_row, max_col, save_value + a[row][i], max_value);
	}
}
