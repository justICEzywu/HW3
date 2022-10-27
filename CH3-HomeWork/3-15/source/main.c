#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maximum(int x, int y, int z);

int main(void)
{
	int number1;
	int number2;
	int number3;

	printf("%s", "Please enter three number:  ");
	scanf("%d%d%d", &number1, &number2, &number3);

	printf("Maximum is %d\n", maximum(number1, number2, number3));

}
int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;

	if (z > max)
		max = z;

	return max;

 }
    
