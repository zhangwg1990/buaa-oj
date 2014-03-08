#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	int n;
	while (EOF != scanf("%d", &n)) {
		c = '*';
		while (n > 0) {
			if (1 == n) {
				printf("%c\n", c);
				n--;
			} else {
				printf("%c%c\n", c, c);
				c = '*' + '#' - c;
				n -= 2;
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}