#include <stdio.h>

int main()
{
	int a,b,c,e;
	printf("請輸入一個數：");
	scanf("%d", &c);
	printf("0 1 ");
	for (int i = 1; i <=c; i++)
	{
		if (i == 1 || i == 2)
			continue;
		a = 0;
		b = 1;
		for (int d = 3; d <= i; d++)
		{
			e = a + b;
			a = b;
			b = e;
		}
		printf("%d ", b);
	}
	printf("\n最大數為：%d \n", b);

	return 0;
}