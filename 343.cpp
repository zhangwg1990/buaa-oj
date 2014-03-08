#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	char a, b, start, end;
	char buf[4];
	while (EOF != scanf("%s", buf)) {
		a = buf[0];
		b = buf[1];
		//fflush(stdin);
		if (a < b) {
			for (i = a; i <= b; i++) {
				printf("%c", i);
			}
			printf("\n");
		} else {
			if ((a >= 'a') && (a <= 'z')) {
				start = 'a';
				end = 'z';
			} else {
				start = 'A';
				end = 'Z';
			}
			for (i = a; i <= end; i++)
				printf("%c", i);
			for (i = start; i <= b; i++)
				printf("%c", i);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}