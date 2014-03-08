#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int i;
	double buf, sum1, sum2;
	double e, d;

	while (EOF != scanf("%d", &n)) {
		sum1 = sum2 = 0;
		for (i = 0; i < n; i++) {
			scanf("%lf", &buf);
			sum1 += buf;
			sum2 += buf * buf;
			printf("sum1 = %lf sum2 = %lf\n", sum1, sum2);
		}
		e = sum1 / n;
		d = sum2 / n - e * e;
		printf("%.5lf %.5lf\n", e, d);
	}
	system("pause");
	return 0;
}