#include<stdio.h>
int style(char a) {
	if (a >= '0' && a <= '9')
		return 1;
	else if (a >= 'a' && a <= 'z')
		return 2;
	else if (a >= 'A' && a <= 'Z')
		return 3;
	else
		return 0;
}
int main() {
	char a[1024], b[1024];
	int p, q;
	int i;
	freopen("data.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	while (EOF != scanf("%s", a)) {
		q = 0;
		for (p = 0; a[p] != '\0'; p++) {
			if ('-' != a[p]) {
				b[q] = a[p];
				q++;
			} else {
				if (style(a[p - 1]) == style(a[p + 1]) && style(a[p - 1]) != 0) {
					for (i = 0; i < a[p + 1] - a[p - 1] - 1; i++) {
						b[q] = a[p - 1] + i + 1;
						q++;
					}
				} else {
					b[q] = a[p];
					q++;
				}
			}
		}
		b[q] = '\0';
		printf("%s\n", b);
	}
	return 0;
}