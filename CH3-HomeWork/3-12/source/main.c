#include <stdio.h>

int square(int y);
int main(void)
{
	for (int a = 1; a <= 10; a++)
	{
		printf(" %d ", square(a));  //接收第十六行的回傳值
	}
	printf("\n");
	system("pause");
	return 0;
}
int square(int y)
{
	return y * y;  //將計算後的值回傳至第八行
}