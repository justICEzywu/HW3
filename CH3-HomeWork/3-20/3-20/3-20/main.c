#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	for (unsigned int i = 1; i <= 20; i++)
	{
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0)  //�Y������l�ᴫ��
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}