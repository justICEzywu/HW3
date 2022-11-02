#include <stdio.h>

int main()
{
	int a, b,c=1;

	printf("請輸入基數與指數：");
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= b; i++)
	{
		c = c * a;

	}
	printf("答案為 : %d", c);

	return 0;
}