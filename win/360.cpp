#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, x, flag;
	int s[1000000];
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf("%d", s + i);
		}
		scanf("%d", &x);
		flag = 0;
		for (i = 0; i < n; i++){
			if (x == s[i]) {
				printf("%d ", i + 1);
				flag = 1;
			}
		}
		if (0 == flag)
			printf("WTF!\n");
		else
			printf("\n");
	}
	system("pause");
	return 0;
}