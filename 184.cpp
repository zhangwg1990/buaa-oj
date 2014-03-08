#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, sum;
	int a[100], b[100];
	double ans;
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++)
			scanf("%d", a + i);
		for (i = 0; i < n; i++)
			scanf("%d", b + i);
		sum = 0;
		for (i = 0; i < n; i++) {
			sum += a[i] * b[n - 1 - i];
		}
		ans = (double)sum / (double)n;
		printf("%d\n%.2lf\n", sum, ans);
	}
	system("pause");
	return 0;
}