#include<stdio.h>
#include<stdlib.h>
void str_input(char a[][100], int num)
{
	int i;
	for (i = 0; i < num; i++)
		gets(a[i]);
}
void str_output(char a[][100], int num)
{
	int i;
	for (i = 0; i < num; i++)
		printf("%s\n", a[i]);
}
int my_strcmp(char *a, char *b)
{
	char *p, *q;
	p = a;
	q = b;
	while (p && q) {
		if (*p > *q)
			return 1;
		else if (*p < *q)
			return -1;
		else {
			++p;
			++q;
		}
	}
	if ((0 == p) && (0 == q))
		return 0;
	else if (0 == p)
		return -1;
	else 
		return 1;
}
int cmp(const void *a, const void *b)
{
	return my_strcmp(((char *)a), ((char *)b));
}
int main()
{
	char a[20][100];
	int n;
	while (EOF != scanf("%d\n", &n)) {
		str_input(a, n);
		qsort(a, n, 100 * sizeof(char), cmp);
		str_output(a, n);
		printf("\n");
	}
	system("pause");
	return 0;
}