#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s;
	int i, j, n, m, temp;
	int girl[10];
	while (EOF != scanf("%d %d %c", &n, &m ,&s)) {
		for (i = 0; i < n; i++) {
			girl[i] = 0;
		}
		for (i = 0; i < m; i++) {
			scanf("%d", &temp);
			girl[temp - 1]++;
		}
		for (i = 0; i < n; i++) {
			printf("[%d]", i + 1);
			for (j = 0; j < girl[i]; j++)
				printf("%c", s);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}