/*Hướng dẫn
Input : 5 2
7 3 3 9 10
Output: 12

Giải thích Output :
- Tí chọn hai bài có vị trí lần lượt là 1, 4
- Tổng số điểm Tí đạt được là : 3 + 9 = 12

SỬ DỤNG THUẬT TOÁN : QUAY LUI
- Ta duyệt qua tất cả các trường hợp mà Tí có thể làm bài
    + Ở mỗi trường hợp : không có hai bài liên tiếp nào có khoảng cách quá một
    + Sau khi có được từng trường hợp, lưu lại điểm số lớn nhất trong các trường hợp đó
*/

#include<stdio.h>

int a[25];

/*idx : lưu vị trí bài đang đứng
n : độ dài mảng
k : số bài có thể làm
dachon : số bài đã được chọn
luu_diem : lưu số điểm của các trường hợp
max_diem : mỗi khi có được một trường hợp, cập nhật lại điểm số lớn nhất nếu có
*/
void QuayLui_maxdiem(int idx, int n, int k, int dachon, int luu_diem, int* max_diem);

int main()
{
	int n, k, i, max = 0;
	scanf("%d%d", &n, &k);
	for(i = 0; i < n; i++)
		scanf("%d", a + i);
		
	QuayLui_maxdiem(0, n, k, 0, 0, &max);
	printf("%d", max);
		
	return 0;
}

void QuayLui_maxdiem(int idx, int n, int k, int dachon, int luu_diem, int* max_diem)
{
	//Đã chọn đủ k bài, hàm kết thúc
	if(dachon == k)
	{
        //Nếu số điểm đang lưu chưa phải là max, cập nhật lại nó
		if(*max_diem < luu_diem)
			*max_diem = luu_diem;
		return;
	}
	
	int i;
	
	//Chọn bài đầu tiên sẽ làm, chỉ có thể chọn bài thứ 0 hoặc 1
	if(dachon == 0)
	{
		for(i = 0; i < 2; i++)
			QuayLui_maxdiem(i, n, k, 1, a[i], max_diem);
	}else{  //Chọn bài thứ dachon sẽ làm, chỉ có thể chọn một trong 2 bài kề bên phải
		for(i = 1; i <= 2; i++)
			if(idx + i < n)
				QuayLui_maxdiem(idx + i, n, k, dachon + 1, luu_diem + a[idx + i], max_diem);
	}
}
