#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Power(double, int);
int main(void)
{
	int k;
	double ans;
	printf("�p��3.5��k����?,�п�Jk=");
	scanf("%d",&k);
	ans = Power(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
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