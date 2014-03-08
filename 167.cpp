#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a, *b;
	int i, j, size, k;
	int n;
	while (EOF != scanf("%d", &n)) {
		size = n + 1;
		a = (int *)malloc(n * n *sizeof(int));
		b = (int *)malloc(n * n *sizeof(int));

		for (i = 0; i < n * n; ++i) {
			*(a + i) = i + 1;
		}

		k = 0;
		while (--size) {
			for (i = n - size, j = n - size; j < n; ++j) {
				*(b + n * i + j) = *(a + k);
				k ++;
			}

			for (j = i, ++i; i < n; ++i) {
				*(b + n * i + j) = *(a + k);
				k++;
			}
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < n - 1; j++) {
				printf("%d ", *(b + n * i + j));
			}
			printf("%d\n", *(b + n * i + j));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}