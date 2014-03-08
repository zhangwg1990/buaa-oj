#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[12][12], b[12][12];
	int n, i, j, k, d;
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				a[i][j] = i * n + j + 1;
		k = 0;
		i = 0;
		j = -1;
		while (k < n * n) {
			while (i != n - j - 1) {
				j++;
				b[i][j] = a[k / n][k % n];
				k++;
			}
			if (n * n == k) break;
			while (i != j) {
				i++;
				b[i][j] = a[k / n][k % n];
				k++;
			}
			if (n * n == k) break;
			while (i != n - j - 1) {
				j--;
				b[i][j] = a[k / n][k % n];
				k++;
			}
			if (n * n == k) break;
			while (i != j + 1) {
				i--;
				b[i][j] = a[k / n][k % n];
				k++;
			}
			if (n * n == k) break;
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n - 1; j++) {
				printf("%d ", b[i][j]);
			}
			printf("%d\n", b[i][j]);
		}
		printf("\n");
	}
	//system("pause");
	return 0;
}