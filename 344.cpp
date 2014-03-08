#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s[100];
	int t, i, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		i = 0;
		a = b = 0;
		while ('E' != s[i]) {
			if ('W' == s[i]) {
				a++;
			} else {
				b++;
			}
			if ((a > 10 || b > 10) && (a - b > 1 || b - a > 1)) {
				printf("%d:%d\n", a, b);
				a = b = 0;
			}
			++i;
		}
		printf("%d:%d\n", a, b);
	}
	system("pause");
	return 0;
}