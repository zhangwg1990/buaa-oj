#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int select_min(char *p, int s)
{
	int i, temp = 0;
	++s;
	for (i = 0; i < s; i++) {
		if (*(p + i) < *(p + temp))
			temp = i;
	}
	return temp;
}
int select_first(char *p, int s)
{
	int i, temp = 0;
	++s;
	for (i = 0; i < s; i++) {
		if ((*(p + i) < *(p + temp)) && (*(p + i) > '0'))
			temp = i;
	}
	return temp;
}
int main()
{
	int i, j;
	int n, s;
	char *a, *b, *p, *q;
	while (EOF != scanf("%d %d\n", &n, &s)) {
		a = (char *)malloc((n + 1) * sizeof(char));
		b = (char *)malloc((n + 1 - s) * sizeof(char));
		memset(b, 10, n + 1 - s);
		*(b + n - s) = '\0';
		scanf("%s", a);
		i = select_first(a, s);
		*(b + 0) = *(a + i);
		s -= i;
		p = a + i + 1;
		q = b + 1;
		while ((s > 0) && ('\0' != *q)) {
			i = select_min(p, s);
			*q = *(p + i);
			s -= i;
			p = p + i + 1;
			++q;
		}
		while (*p && *q) {
			*q = *p;
			++p;
			++q;
		}
		printf("%s\n", b);
		free(a);
		free(b);
	}
	system("pause");
	return 0;
}