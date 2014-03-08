#include<stdio.h>
#include<stdlib.h>
typedef struct matrix {
	int row;
	int column;
	int *value;
}matrix;

struct matrix multiply(struct matrix a, struct matrix b)
{
	struct matrix c;
	int i, j, k;
	c.value = (int *)malloc(a.row * b.column * sizeof(int));
	c.row = a.row;
	c.column = b.column;
	for (i = 0; i < a.row; i++) {
		for (j = 0; j < b.column; j++) {
			*(c.value + a.row * i + j) = 0;
			for (k = 0; k < a.column; k++)
				*(c.value + a.row * i + j) += (*(a.value + a.row * i + k)) * (*(b.value + b.row * k + j));
			}
		}
	/*for (i = 0; i < c.row; i++) {
			for (j = 0; j < c.column; j++) {
				printf("%d\t", *(c.value + i * c.row + j));
			}
			printf("\n");
	}*/
	free(a.value);
	free(b.value);
	return c;
}
int main()
{
	struct matrix a[10], temp[2];
	int n, i, j, k;
	int flag;
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++){		//¾ØÕóÊäÈë£»
			scanf("%d %d", &a[i].row, &a[i].column);
			a[i].value = (int *)malloc(a[i].row * a[i].column * sizeof(int));
			for (j = 0; j < a[i].row * a[i].column; j++)
				scanf("%d", a[i].value + j);
		}								//ÊäÈë½áÊø£»
		/*for (i = 0; i < n; i++) {				//ÊäÈëÊä³ö²âÊÔ£»
			for (j = 0; j < a[i].row; j++) {
				for (k = 0; k < a[i].column; k++) {
					printf("%d\t", *(a[i].value + j * a[i].row + k));
				}
				printf("\n");
			}
			printf("\n");
		}*/
		/*temp[0] = multiply(a[0], a[1]);			//²âÊÔº¯Êýmultiply;
		printf("temp0.row = %d, temp0.columb = %d\n", temp[0].row, temp[0].column);
		for (i = 0; i < temp[0].row; i++) {
			for (j = 0; j < temp[0].column; j++) {
				printf("%d\t", *(temp[0].value + i * temp[0].row + j));
			}
			printf("\n");
		}*/
		flag = 1;
		temp[0] = a[0];
		
		for (i = 0; i < n - 1; i++) {
			if (temp[i % 2].column != a[i + 1].row) {
				flag = 0;
				break;
			} else {
				temp[(i + 1) % 2] = multiply(temp[i % 2], a[i + 1]);
				//printf("#%d\n", (i + 1) % 2);
				/*for (k = 0; k < temp[(i + 1) % 2].row; k++) {
					for (j = 0; j < temp[(i + 1) % 2].column; j++) {
						printf("%d\t", *(temp[(i + 1) % 2].value + k * temp[(i + 1) % 2].row + j));
					}
					printf("\n");
				}*/
			}
		}
		if (0 == flag)
			printf("%d\n", -1);
		else {
			//printf("#%d\n", i % 2);
			for (k = 0; k < temp[i % 2].row; k++) {
				for (j = 0; j < temp[i % 2].column; j++) {
					printf("%d ", *(temp[i % 2].value + k * temp[i % 2].row + j));
				}
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}