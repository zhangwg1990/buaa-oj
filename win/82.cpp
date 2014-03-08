#include<stdio.h>
#include<stdlib.h>

int main()
{
	int card[101];
	int n, i;
	int temp, count;
	while (EOF != scanf("%d", &n)) {
		count = 0;
		for (i = 1; i <= 100; i++)
			card[i] = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &temp);
			card[temp]++;
		}
		for (i = 1; i <= 100; i++) {
			if (card[i] > 0)
				count++;
		}
		printf("%d\n", count);
	}
	system("pause");
	return 0;
}