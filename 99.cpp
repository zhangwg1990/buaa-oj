#include<stdio.h>
#include<stdlib.h>
int Comp(const void *p1, const void *p2 )
{
	if (*((int *)p1) > *((int *)p2))
		return 1;
	else 
		return -1;
}
void array_print(int *a, int size)
{
	int i = 0;
	for (i = 0; i < size - 1; i++)
		printf("%d ", *(a + i));
	printf("%d\n", *(a + i));
}
int main()
{
	int *a;
	int n, i;
	while (EOF != scanf("%d", &n)) {
		a = (int *)malloc(n * sizeof(int));
		for (i = 0; i < n; i++)
			scanf("%d", a + i);
		qsort(a, n, sizeof(int), Comp);
		array_print(a, n);
		free(a);
	}
	system("pause");
	return 0;
}