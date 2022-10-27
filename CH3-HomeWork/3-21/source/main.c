#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i;
	unsigned seed;
	printf("Enter seed:");
	scanf("%u", &seed);  //%u為正整數
	srand(seed);

	for (i = 1; i <= 10; i++)
	{
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}