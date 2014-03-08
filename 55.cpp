#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int n, i, flag;
	char s[200];
	while (EOF != scanf("%d", &n)) {
		scanf("%s", s);
		//puts(s);
		flag = 0;
		for (i = 0; i < n - 2; i++) {
			if ((s[i + 1] == s[i] + 1) && (s[i + 2] == s[i] + 2)) {
				printf("YES\n");
				flag = 1;
				break;
			}
		}
		if (0 == flag)
			printf("NO\n");
		
	}
	system("pause");
	return 0;
}