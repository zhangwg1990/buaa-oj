#include<stdio.h>
#include<stdlib.h>
void move(char a, char c, int n)
{
	if (1 == n)
		printf("%c->%c\n", a, c);
	else {
		move(a, 198 - a - c, n - 1);
		printf("%c->%c\n", a, c);
		move(198 - a - c, c, n - 1);
	}
}
int main()
{
	int n;
	while (EOF != scanf("%d", &n)) {
		move('A', 'C', n);
		printf("\n");
	}
	system("pause");
	return 0;
}