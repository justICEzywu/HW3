#include<stdio.h>


int main()
{
	int a,b,c,d,e;

	printf("請輸入兩個正整數: ");
	scanf("%d %d", &a, &b);

	for (c = 1; c <= a && c <= b; c++)
	{

		if (a%c == 0 && b%c == 0)
			d = c;
	
	}

	e = ((a*b) / d);
	printf("%d 和 %d 最小公倍數為： %d", a, b, e);

	return 0;
}