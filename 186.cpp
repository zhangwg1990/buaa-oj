#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, flag, cf;
	char a[10], b[3];
	while (EOF != scanf("%s", a)) {

		cf = 0;
		for (i = 2; i >= 0; i--) {
			b[i] = a[i] + a[i + 3] + cf - '0';
			if (b[i] > '9') {
				cf = 1;
				b[i] -= 10;
			} else {
				cf = 0;
			}
		}
		flag = 1;
		for (i = 0; i < 3; i++) {
			if (a[i + 6] != b[i])
				flag = 0;
		}

		if (0 == flag || 1 == cf)
			printf("NO\n");
		else 
			printf("YES\n");
	}
	system("pause");
	return 0;
}