#include<stdio.h>
int main() {
	int a[50][50];
	int n, n2;
	int i, j, k;
	
	freopen("data.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	while (EOF != scanf("%d", &n)) {
		k = 1;
		i = 0;
		j = -1;
		n2 = n * n;
		while (k <= n2) {
			while (j != n - 1 - i && k <= n2) {
				j++;
				a[i][j] = k;
				k++;
			}
			while (i != j && k <= n2) {
				i++;
				a[i][j] = k;
				k++;
			}
			while (j != n - 1 - i && k <= n2) {
				j--;
				a[i][j] = k;
				k++;
			}
			while (i != j + 1 && k <= n2) {
				i--;
				a[i][j] = k;
				k++;
			}
		}
		for (i = 0; i < n; i++)
			for (j = 0; j <n; j++)
				printf("%d%c", a[i][j], (j == n - 1) ? '\n' : ' ');
	}
	return 0;
}