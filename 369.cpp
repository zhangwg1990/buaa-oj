#include<stdio.h>
int main() {
	int i, j, ok;
	int a[8][8];
	int row[8], col[8], diag1, diag2;
	freopen("data.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	while (EOF != scanf("%d", &a[0][0])) {
		for (i = 0; i < 8; i++) {
			row[i] = 0;
			col[i] = 0;
		}
		diag1 = diag2 = 0;
		if (1 == a[0][0]) {
			diag1++;
			row[0]++;
			col[0]++;
		}

		for (j = 1; j < 8; j++) {
			scanf("%d", &a[0][j]);
			if (1 == a[0][j]) {
				row[0]++;
				col[j]++;
				if (7 == j)
					diag2++;
			}
		}

		for (i = 1; i < 8; i++) {
			for (j = 0; j < 8; j++) {
				scanf("%d", &a[i][j]);
				if (1 == a[i][j]) {
					row[i]++;
					col[j]++;
					if (i == j)
						diag1++;
					else if (7 == (i + j))
						diag2++;
				}
			}
		}
		ok = 1;
		for (i = 0; i < 8; i++) {
			if (1 != row[i] || 1 != col[i]) {
				ok = 0;
				break;
			}
		}
		if (0 == ok)
			printf("No\n");
		else if (1 < diag1 || 1 < diag2)		//混蛋啊，你题目中不说清楚对角线到底是“有且仅有一个”还是“最多一个”，这里卡了我半天。
			printf("No\n");
		else 
			printf("Yes\n");
		
	}
	return 0;
}