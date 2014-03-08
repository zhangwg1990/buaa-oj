#include<stdio.h>
int main()
{
	char c;
	while (EOF != (c = getchar())) {
		putchar(c);
	}
	return 0;
}