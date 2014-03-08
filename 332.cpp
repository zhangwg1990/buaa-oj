#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, n_1, n_2, result;
	while (EOF != scanf("%d", &n)) {
		if (1 == n)
			printf("%d\n", 1);
		else if (2 == n)
			printf("%d\n", 2);
		else {
			n_1 = 1;
			n_2 = 2;
			for (i = 0; i < n - 2; i++) {
				result = n_1 + n_2;
				n_1 = n_2;
				n_2 = result;
			}
			printf("%d\n", result);
		}
	}
	system("pause");
	return 0;
}