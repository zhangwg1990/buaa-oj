#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t, m, n, i, j, sum1, sum2;
	int  temp;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &m);
		sum1 = sum2 = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				scanf("%d", &temp);
				if (0 == (i + j) % 2)
					sum1 += temp;
				else
					sum2 += temp;
			}
		}
		if (sum1 == sum2)
			printf("Yes\n");
		else
			printf("No\n");
	}
	system("pause");
	return 0;
}