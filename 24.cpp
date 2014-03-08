#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, j, len;
	char c, lastchar;
	scanf("%d", &n);
	while (n > 0){
		n--;
		scanf("%d ", &len);
		i = 1;
		lastchar = getchar();
		for (j = 1; j <= len; j++){
			c = getchar();
			if (c == lastchar){
				i++;
			}else
			{
				printf("%d%c", i, lastchar);
				lastchar = c;
				i = 1;
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}