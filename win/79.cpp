#include<stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
	int a[N], b[N], c[N];
	int n, i;
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++)
			scanf("%d", a + i);
		for (i = 0; i < n; i++)
			scanf("%d", b + i);
		for (i = 0; i < n - 1; i++)
			printf("%d ", a[i] + b[i]);
		printf("%d\n", a[i] + b[i]);
	}
	system("pause");
	return 0;
}