#include<stdio.h>
#include<stdlib.h>
int ischar(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	else 
		return 0;
}
int isacc(char ans[100][120], char test[100][120], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; '\0' != ans[i][j]; j++) {
			if (ans[i][j] != test[i][j])
				return 0;
		}
	}
	return 1;
}
int ispe(char ans[100][120], char test[100][120], int m, int n) {
	int i_a, j_a, i_t, j_t;
	i_a = j_a = i_t = j_t = 0;
	while (1) {
		while (1 != ischar(ans[i_a][j_a])) {
			if ('\0' == ans[i_a][j_a] && i_a == n - 1) {
				return 1;
			} else if ('\0' == ans[i_a][j_a]) {
				i_a++;
				j_a = 0;
			} else {
				j_a++;
			}
		}
		while (1 != ischar(test[i_t][j_t])) {
			if ('\0' == test[i_t][j_t] && i_t == m - 1) {
				return 0;
			} else if ('\0' == test[i_t][j_t]) {
				i_t++;
				j_t = 0;
			} else {
				j_t++;
			}
		}
		if (test[i_t][j_t] != ans[i_a][j_a])
			return 0;
		else {
			j_t++;
			j_a++;
		}
	}
}
int main(){
	char ans[100][120];
	char test[100][120];
	int m , n, i, k = 0;
	while (EOF != scanf("%d", &n)) {
		getchar();
		if (0 == n) break;
		for (i = 0; i < n; i++) {
			gets(ans[i]);
		}
		scanf("%d\n", &m);
		for (i = 0; i < m; i++) {
			gets(test[i]);
		}
		k++;
		if (1 == isacc(ans, test, n)) {
			printf("Run #%d: Accepted\n", k);
		} else if (1 == ispe(ans, test, m, n)) {
			printf("Run #%d: Presentation Error\n", k);
		} else {
			printf("Run #%d: Wrong Answer\n", k);
		}
	}
	system("pause");
	return 0;
}