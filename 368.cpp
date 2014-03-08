#include<stdio.h>
int main() {
	int i, j, n;
	long long a[50][50];
	for (i = 0; i < 50; i++) {
		a[i][0] = a[i][i] = 1;
		for (j = 1; j < i; j++) {
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < i; j++) {
				printf("%lld ", a[i][j]);
			}
			printf("%lld\n", a[i][j]);
		}
	}
	return 0;
}