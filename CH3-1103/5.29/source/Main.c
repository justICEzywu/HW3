#include<stdio.h>


int main()
{
	int a,b,c,d,e;

	printf("�п�J��ӥ����: ");
	scanf("%d %d", &a, &b);

	for (c = 1; c <= a && c <= b; c++)
	{

		if (a%c == 0 && b%c == 0)
			d = c;
	
	}

	e = ((a*b) / d);
	printf("%d �M %d �̤p�����Ƭ��G %d", a, b, e);

	return 0;
}