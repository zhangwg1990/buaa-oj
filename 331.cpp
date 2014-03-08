#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, a, sum;
	while (EOF != scanf("%d", &n)) {
		if (0 == n)
			break;
		else {
			sum = 0;
			for (i = 0; i < n; i++) {
				scanf("%d", &a);
				sum += a * a;
			}
			printf("%d\n", sum);
		}
	}
	system("pause");
	return 0;
}