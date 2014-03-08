#include<stdio.h>
#include<stdlib.h>
int len(long long n)
{
	int l = 0;
	while (n > 0) {
		n /= 10;
		++l;
	}
	return l;
}int len_str(char *a)
{
	int n = 0;
	while ('\0' != a[n]) ++n;
	return n;
}
void trans_str(long long num, char a[])
{
	int l, i;
	l = len(num);
	a[l] = '\0';
	for (i = l - 1; i >= 0; --i) {
		a[i] = '0' + num % 10;
		num /= 10;
	}
}
void space_print(char *a, int width)
{
	int i, n;
	n = len_str(a);
	for (i = 0; i < width - n; i++)
		printf(" ");
	for (i = 0; i < n; i++)
		printf("%c",a[i]);
	printf("\n");
}
void space_print2(char *a, int width)
{
	int i, n;
	n = len_str(a);
	for (i = 0; i < width - n - 1; i++)
		printf(" ");
	printf("%c", 'x');
	for (i = 0; i < n; i++)
		printf("%c",a[i]);
	printf("\n");
}
int main()
{
	char temp[15][30], a[30], b[30], res[30];
	int m, n, lm, ln, lr, maxl, i, j;
	long long result;
	while (EOF != scanf("%d %d", &m, &n)) {
		result = (long long)m * (long long)n;
		if (m == 0 && n == 0) break;
		lm = len(m);
		ln = len(n);
		lr = len(result);
		maxl = (lr > ln + 1) ? lr : ln + 1;
		trans_str(m, a);
		trans_str(n, b);
		trans_str(result, res);

		for (i = 0; i < ln; ++i) {
			if ('0' == b[ln - i - 1]) {
				temp[i][1] = '\0';
				temp[i][0] = '0';
			} else 
				trans_str((b[ln - i - 1] - '0') * (long long)m, temp[i]);
		}
		space_print(a, maxl);
		space_print2(b, maxl);
		for (i = 0; i < maxl; i++)
			printf("-");
		printf("\n");
		if (1 == ln) {
			space_print(temp[0], maxl);
		} else {
			for (i = 0; i < ln; i++) {
				space_print(temp[i], maxl - i);
			}
			for (i = 0; i < maxl; i++)
				printf("-");
			printf("\n");
			space_print(res, maxl);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}