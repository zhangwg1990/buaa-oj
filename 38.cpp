#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	int n, i, sum;
	while (EOF != scanf("%d", &n)) {
		sum = 0;
		getchar();
		for (i = 0; i < n; i++) {
			c = getchar();
			sum += c;
		}
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}