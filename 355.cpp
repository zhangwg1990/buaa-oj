#include<stdio.h>
#include<stdlib.h>

int main()
{
	short i, dc, db;
	int n, a[5000];
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf("%d", a + i);
		}
		dc = db = 1;
		for (i = 1; i < n - 1; i++) {
			if (2 * a[i] != a[i - 1] + a[i + 1]) {
				dc = 0;
				break;
			} else {
			}
		}
		for (i = 1; i < n - 1; i++) {
			if (a[i] * a[i] != a[i - 1] * a[i + 1]) {
				db = 0;
				break;
			} else {
			}
		}
		if (2 == db + dc)
			printf("%d\n", 3);
		else if (0 == db + dc)
			printf("%d\n", 4);
		else if (1 == dc)
			printf("%d\n", 1);
		else 
			printf("%d\n", 2);
	}
	system("pause");
	return 0;
}