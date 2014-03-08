#include<stdio.h>
#include<stdlib.h>

int main()
{
	int app[100];
	int n, i, j;
	int max, sum, temp;
	while (EOF != scanf("%d", &n)) {
		sum = 0;
		for (i = 0; i < n; i++)
			scanf("%d", app + i);
		for (i = 0; i < 3; i++) {
			max = 0;
			for (j = 0; j < n; j++) {
				if (app[j] > app[max])
					max = j;
			}
			app[max] = 0;
		}
		for (i = 0; i < n; i++)
			sum += app[i];
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}