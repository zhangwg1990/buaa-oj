#include<stdio.h>
#include<stdlib.h>
typedef struct matrix{
	int size;
	int *value;
}matrix;
void matrix_input(struct matrix *a, int size)
{
	int i, j;
	(*a).size = size;
	(*a).value = (int *)malloc(size * size * sizeof(int));
	for (i = 0; i < size; ++i)
		for (j = 0; j < size; ++j)
			scanf("%d", (*a).value + i * size +j);
}
int judge(struct matrix a)
{
	int i, j, sum, king;
	int size;
	size = a.size;
	king = 0;
	for (i = 0; i < size; i++) {
		sum = 0;
		for (j = 0; j < size; j++) {
			sum += *(a.value + i * size + j);
			king += *(a.value + i * size + j);
		}
		if (sum > 1) return 0;
	}
	for (j = 0; j < size; j++) {
		sum = 0;
		for (i = 0; i < size; i++) {
			sum += *(a.value + i * size + j);
		}
		if (sum > 1) return 0;
	}
	if (king != size)
		return 0;
	else 
		return 1;
}
int main()
{
	int n;
	struct matrix a;
	while (EOF != scanf("%d", &n)) {
		matrix_input(&a, n);
		if (1 == judge(a))
			printf("YES\n");
		else 
			printf("NO\n");
	}
	system("pause");
	return 0;
}