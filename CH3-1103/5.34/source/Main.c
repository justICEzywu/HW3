#include <stdio.h>

int main()
{
	int a, b,c=1;

	printf("�п�J��ƻP���ơG");
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= b; i++)
	{
		c = c * a;

	}
	printf("���׬� : %d", c);

	return 0;
}