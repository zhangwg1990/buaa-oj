#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	double sum;
	while (EOF != scanf("%d", &n)) {
		sum = 0;
		for (i = 1; i <= n; i++) {
			sum += (double)n / (double)i;
		}		
		printf("%.0lf\n", sum);
	}
	system("pause");
	return 0;
}