#include<stdio.h>
#include<stdlib.h>

int main()
{
	double p1, p2, p3;
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	printf("%.3lf\n", ((p3 * p1) / (p3 * p1 + (1. - p3) * (1. - p2))));
	system("pause");
	return 0;
}