#include<stdio.h>
#include<stdlib.h>
int rad(int a[10][10], int i, int j, int m, int n) {
	int flag = 0;
	if (i > 0) {
		if (0 == a[i - 1][j]) {
			a[i - 1][j] = a[i][j];
			flag = 1;
		} else if ((5 - a[i][j]) == a[i - 1][j]) {
			return 2;
		}
	}
	if (i < m - 1) {
		if (0 == a[i + 1][j]) {
			a[i + 1][j] = a[i][j];
			flag = 1;
		} else if ((5 - a[i][j]) == a[i + 1][j]) {
			return 2;
		}
	}
	if (j > 0) {
		if (0 == a[i][j - 1]) {
			a[i][j - 1] = a[i][j];
			flag = 1;
		} else if ((5 - a[i][j]) == a[i][j - 1]) {
			return 2;
		}
	}
	if (j < n - 1) {
		if (0 == a[i][j + 1]) {
			a[i][j + 1] = a[i][j];
			flag = 1;
		} else if ((5 - a[i][j]) == a[i][j + 1]) {
			return 2;
		}
	}
	if (1 == flag)
		return 1;
	else 
		return 0;
}
int main(){
	int a[10][10];
	int m, n, i, j, flag, temp;

	while (EOF != scanf("%d %d", &m, &n)) {
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &a[i][j]);
		flag = 1;
		while (1 == flag) {
			flag = 0;
			for (i = 0; i < m; i++) {
				for (j = 0; j < n; j++) {
					if (2 == a[i][j] || 3 == a[i][j]) {
						temp = rad(a, i, j, m, n);
						if (1 == temp)
							flag = 1;
						else if (2 == temp) {
							flag = 2;
							i = m;
							j = n;
							break;
						}
					}
				}
			}
		}
		/*for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf("%d	", a[i][j]);
			}
			printf("\n");
		}*/
		if (2 == flag)
			printf("Yes\n");
		else 
			printf("No\n");
	}
	system("pause");
	return 0;
}