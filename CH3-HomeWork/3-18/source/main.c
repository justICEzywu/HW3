#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	char string[60] = "Welcome";
	char string2[60];

	int len;
	strcpy(string2, string);
	printf("string2=%s\n", string2);
	len = strlen(string2);
	printf("¦r¦êªø«×¬°:%d\n", len);
	system("pause");
	return 0;
		
}