#include<stdio.h>
#include<stdlib.h>

int main()
{
	int qa[100], qb[102];
	int i;
	int n, a, b;
	while (EOF != scanf("%d %d %d", &n, &a, &b)) {
		for (i = 0; i < n; i++) {
			scanf("%d", qa + i);
		}
		if (b <= a)	a = a + 1;
		if (a < b) {
			for (i = 0; i < a - 1; i++)
				qb[i] = qa[i];
			qb[a - 1] = -1;
			for (i = a; i < b - 1; i++)
				qb[i] = qa[i - 1];
			qb[b - 1] = -2;
			for (i = b; i < n + 2; i++)
				qb[i] = qa[i - 2];
			for (i = 0; i < n + 1; i++)
				printf("%d ", qb[i]);
			printf("%d\n", qb[i]);
		}else if (b < a) {
			for (i = 0; i < b - 1; i++)
				qb[i] = qa[i];
			qb[b - 1] = -2;
			for (i = b; i < a - 1; i++)
				qb[i] = qa[i - 1];
			qb[a - 1] = -1;
			for (i = a; i < n + 2; i++)
				qb[i] = qa[i - 2];
			for (i = 0; i < n + 1; i++)
				printf("%d ", qb[i]);
			printf("%d\n", qb[i]);
		}
	}
	system("pause");
	return 0;
}