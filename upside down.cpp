/*以“@”为字符，打印一个6行的倒正三角形*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	for (i = 1;i <= 11; i++) printf("@");
	printf("\n");
	for (int i = 2; i <= 5; i++)
	{
		for (j = 1; j <= i-1; j++) printf(" ");
		printf("@");
		for (j = i + 1; j <= 11 - i; j++) printf(" ");
		printf("@");
		printf("\n");
	}
	for (i = 1;i <= 5; i++) printf(" ");
	printf("@\n");
	system("pause");
	return 0;
}