#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main(void)
{
	int i;
	for (i = 1; i <= 10; i++)
		printf("%.2f  ", sqrt(i));

	printf("\n");
	system("pause");
	return 0;

}