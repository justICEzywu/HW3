#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Power(double, int);
int main(void)
{
	int k;
	double ans;
	printf("計算3.5的k次方?,請輸入k=");
	scanf("%d",&k);
	ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n", k, ans);
	system("pause");
}
double Power(double X, int n)
{
	int i;
	double PowerXn = 1;
	for (i = 1; i <= n; i++)
		PowerXn = PowerXn * X;
		return PowerXn;
}