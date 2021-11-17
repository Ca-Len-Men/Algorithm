#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<windows.h>

/*
#Tìm đường đi trong mê cung
Input : 4 1 1
.....*...
****.*.*.
.....*...
***....*+

Output :
.....****
****.****
****.*...
****...*.

Giải thích :
- Dòng đầu tiên gồm : số dòng của mê cung, vị trí x, y là điểm bắt đầu
- N dòng tiếp theo thể hiện mê cung bằng mảng ký tự hai chiều

Nhân vật : chỉ được phép di chuyển theo 4 hướng cơ bản
          + Trái, phải, lên, xuống
Mô tả mê cung :
'.' : ô trống được phép đi
'*' : bức tường
'+' : đích đến

#Yêu cầu : tìm ra đường đi ngắn nhất để đến được đích
*/

const int MAXSIZE = 20;
char maze[MAXSIZE][MAXSIZE + 1];
bool array_tick[MAXSIZE][MAXSIZE];
bool array_minlen[MAXSIZE][MAXSIZE];

void BGcolor(int code);
void copy_tick_to_minlen(int n);
void print_maze(bool array_2D[][MAXSIZE], int n);
void QuayLui_timduong(int x, int y, int n, int& isFinish_minlen);

int dem(bool array_2D[][MAXSIZE], int n);

void main()
{

	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);

	//Gán mảng đánh dấu bằng false
	for (int i = 0; i < MAXSIZE; i++)
		for (int j = 0; j < MAXSIZE; j++)
			array_tick[i][j] = false;

	//Đọc mê cung
	for (int i = 0; i < n; i++)
		scanf("%s", maze[i]);
	
	printf("\n\n");
	int min = INT_MAX;
	QuayLui_timduong(x - 1, y - 1, n, min);

	printf("Duong di ngan nhat la\n");
	print_maze(array_minlen, n);
}

void QuayLui_timduong(int x, int y, int n, int& isFinish_minlen)
{
	//Nếu nhân vật đi ra khỏi mê cung, hàm kết thúc
	if (x < 0 || y < 0 || x >= n || maze[x][y] == '\0')
		return;
	//Nếu vị trí đang đứng là bức tường, hàm kết thúc
	if (maze[x][y] == '*')
		return;
	//Nếu vị trí đang đứng đã được đánh dấu, hàm kết thúc
	if (array_tick[x][y])
		return;

	//Đánh dấu vị trí này đã đi qua
	array_tick[x][y] = true;


	printf("Xuat me cung\n");
	//Xuất ra mê cung
	for (int i = 0; i < n; i++)
		printf("%s\n", maze[i]);
	printf("\n\n");
	print_maze(array_tick, n);
	//getch();
	Sleep(300);
	system("cls");

	//Đã đến đích
	if (maze[x][y] == '+')
	{
		int sum = dem(array_tick, n);

		if (isFinish_minlen > sum)
		{
			isFinish_minlen = sum;
			copy_tick_to_minlen(n);
		}

		//Trả lại dấu tích
		array_tick[x][y] = false;
		return;
	}

	/*
	0 : qua phải
	1 : qua trái
	2 : đi lên
	3 : đi xuống
	*/

	for (int i = 0; i < 4; i++)
	{
		//Chọn hướng
		switch (i)
		{
			case 0://Qua phải
				QuayLui_timduong(x, y + 1, n, isFinish_minlen);
				break;

			case 1://Qua trái
				QuayLui_timduong(x, y - 1, n, isFinish_minlen);
				break;

			case 2://Đi lên
				QuayLui_timduong(x - 1, y, n, isFinish_minlen);
				break;

			case 3://Đi xuống
				QuayLui_timduong(x + 1, y, n, isFinish_minlen);
				break;
		}
	}

	//Trả lại vị trí đang đứng
	array_tick[x][y] = false;
}

void copy_tick_to_minlen(int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; maze[i][j] != '\0'; j++)
			array_minlen[i][j] = array_tick[i][j];
}

void print_maze(bool array_2D[][MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; maze[i][j] != '\0'; j++)
			if (array_2D[i][j])
			{
				BGcolor(14);
				putchar(1);
			}
			else {
				BGcolor(7);
				putchar(254);
			}
		putchar('\n');
	}
}

int dem(bool array_2D[][MAXSIZE], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; maze[i][j] != '\0'; j++)
			if (array_2D[i][j])
				sum++;
	return sum;
}

void BGcolor(int code)
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, code);
}
