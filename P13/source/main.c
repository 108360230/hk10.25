#include<stdio.h>
#include<stdlib.h>

double power(double, int);

void main(void)
{
	int n;
	double ans;
	printf("�p��3.5��n����A�п�Jn");
	scanf_s("%d", &n);
	ans = power(3.5, n);
	printf("3.5��%d����=%f", n, ans);

	system("pause");
}
double power(double x, int k)
{
	int i ;
	double powerxn = 1;
	for (i = 1; i <= k; i++)
	{
		powerxn = powerxn * x;
	}
	return powerxn;

}