#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, end, flag;
	int n;
	while (EOF != scanf("%d", &n)) {
		if (2 == n) {
			printf("YES\n");
			continue;
		}
		end = (int)sqrt((double)n) + 1;
		
		flag = 0;
		for (i = 2; i <= end; ++i) {
			if (0 == n % i) {
				flag = 1;
				break;
			}
		}
		if (0 == flag)
			printf("YES\n");
		else 
			printf("NO\n");

	}
	system("pause");
	return 0;
}