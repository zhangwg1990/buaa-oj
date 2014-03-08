#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	long long a1, a2, a3, k;
	while (EOF != scanf("%d", &n)) {
		if (1 == n)
			printf("%d\n", 1);
		else if (2 == n)
			printf("%d\n", 2);
		else if (3 == n)
			printf("%d\n", 4);
		else {
			a1 = 1;
			a2 = 2;
			a3 = 4;
			for (i = 0; i < n - 3; i++) {
				k = a1 + a2 + a3;
				a1 = a2;
				a2 = a3;
				a3 = k;
			}
			printf("%lld\n", k);
		}
	}
	system("pause");
	return 0;
}