#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t, n, i, j, spa;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			if (i < (n - 1) / 2)
				spa = (n - 1) / 2 - i;
			else 
				spa = i - (n - 1) / 2;

			for (j = 0; j < spa; j++)
				printf(" ");
			for (j = 0; j < n - 2 * spa; j++)
				printf("*");
			printf("\n");
		}
	}
	system("pause");
	return 0;
}