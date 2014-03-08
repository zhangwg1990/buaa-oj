#include<stdio.h>
#include<stdlib.h>
void matrix_input(int *a, int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			scanf("%d", a + i * col + j);
		}
	}
}
int main() {
	int row_a, row_b, col_a, col_b, row_pos, col_pos;
	int *a, *b;
	int i, j;
	freopen("data.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	while (EOF != scanf("%d %d", &row_a, &col_a)) {

		a = (int *)malloc(row_a * col_a * sizeof(int));
		matrix_input(a, row_a, col_a);

		scanf("%d %d", &row_b, &col_b);
		b = (int *)malloc(row_b * col_b * sizeof(int));
		matrix_input(b, row_b, col_b);

		scanf("%d %d", &row_pos, &col_pos);

		if (row_pos < row_a + 1 && col_pos < col_a + 1) {
			for (i = row_pos - 1; i < row_pos + row_b - 1 && i < row_a; i++) {
				for (j = col_pos - 1; j < col_pos + col_b - 1 && j < col_a; j++) {
					*(a + i * col_a + j) = *(b + (i - row_pos + 1) * i + j - col_pos + 1);
				}
			}
		}
		for (i = 0; i < row_a; i++) {
			for (j = 0; j< col_a; j++) {
				printf("%d ", *(a + i * col_a + j));
			}
			printf("\n");
		}
	}
	return 0;
}