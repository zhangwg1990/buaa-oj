#include<stdio.h>
#include<stdlib.h>
typedef struct matrix{
	int size;
	int *value;
}matrix;
void matrix_input(struct matrix a)
{
	int i, j;
	for (i = 0; i < a.size; i++)
		for (j = 0; j< a.size; j++)
			scanf("%d", a.value + i * a.size + j);
}
void matrix_output(struct matrix a)
{
	int i, j;
	for (i = 0; i < a.size; i++) {
		for (j = 0; j < a.size; j++) {
			printf("%d ", *(a.value + i * a.size + j));
		}
		printf("\n");
	}
}
void matrix_rotate(struct matrix a)
{
	int i, j, k;
	int *b;
	b = (int *)malloc(a.size * a.size * sizeof(int));
	k = 0;
	for (j = 0; j < a.size; j++) {
		for (i = a.size - 1; i >= 0; i--) {
			*(b + k) = *(a.value + i * a.size + j);
			k++;
		}
	}
	for (i = 0; i < a.size; i++)
		for (j = 0; j < a.size; j++)
			*(a.value + i * a.size + j) = *(b + i * a.size + j);
	free(b);
}
int main()
{
	int n;
	struct matrix a;
	while (EOF != scanf("%d", &n)) {
		a.size = n;
		a.value = (int *)malloc(n * n * sizeof(int));
		matrix_input(a);
		//matrix_output(a);
		matrix_rotate(a);
		matrix_output(a);
	}
	system("pause");
	return 0;
}