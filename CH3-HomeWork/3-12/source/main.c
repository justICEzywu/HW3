#include <stdio.h>

int square(int y);
int main(void)
{
	for (int a = 1; a <= 10; a++)
	{
		printf(" %d ", square(a));  //�����ĤQ���檺�^�ǭ�
	}
	printf("\n");
	system("pause");
	return 0;
}
int square(int y)
{
	return y * y;  //�N�p��᪺�Ȧ^�ǦܲĤK��
}