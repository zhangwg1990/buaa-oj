/*编程打印下列的杨辉三角形*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a1[11], a2[11], i, j;

	a1[0] = 1;

	for (i = 1; i <= 10; i++)
	{
		if (1 == (i % 2))
		{
			printf("#%2d",i);
			for (j = 1;j <= 10 - i; j++) printf("   ");
			for (j = 0; j < i; j++) printf("%6d",a1[j]);
			for (j = 1; j < i; j++) a2[j] = (a1[j - 1] + a1[j]);
			a2[0] = a2[i] = 1;
		}
		else
		{
			printf("#%2d",i);
			for (j = 1;j <= 10 - i; j++) printf("   ");
			for (j = 0; j < i; j++) printf("%6d",a2[j]);
			for (j = 1; j < i; j++) a1[j] = (a2[j - 1] + a2[j]);
			a1[0] = a1[i] = 1;
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}