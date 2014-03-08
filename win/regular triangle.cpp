/*以“#”为字符，打印一个正三角形*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	printf("                 #\n");
	for (i = 2; i < 17; i++)
	{
		for (j = 1; j <= (17 - (i - 1)); j++) printf(" ");
		printf("#");
		for (j = 1; j <= (i * 2 - 3); j++) printf(" ");
		printf("#");
		printf("\n");
	}
	printf(" ");
	for (i = 1; i <= 33; i++) printf("#");
	printf("\n");
	system("pause");
	return 0;
}