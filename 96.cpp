#include<stdio.h>
#include<string.h>
int main() {
	char a[1024], b[1024];
	char c[1024];
	int i, p, q;
	int len_a, len_b;
	int flag;
	freopen("data.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	
	while (EOF != scanf("%s %s", a, b)) {
		p = strlen(a);
		q = strlen(b);
		i = 0;
		flag = 0;
		while (p && q) {
			p--;
			q--;
			c[i] = a[p] + b[q] + flag - '0';
			if (c[i] > '9') {
				c[i] -= 10;
				flag = 1;
			} else {
				flag = 0;
			}			
			i++;
		}
		
		while (p) {
			p--;
			c[i] = a[p] + flag;
			if (c[i] > '9') {
				c[i] -= 10;
				flag = 1;
			} else {
				flag = 0;
			}
			i++;
		}
		while (q) {
			q--;
			c[i] = b[q] + flag;
			if (c[i] > '9') {
				c[i] -= 10;
				flag = 1;
			} else {
				flag = 0;
			}
			i++;
		}
		if (!p && !q && 1 == flag) {
			c[i] = '1';
			i++;
		}
		i--;
		for (; i >= 0; i--) {
			printf("%c", c[i]);
		}
		printf("\n");
	}
	return 0;
}