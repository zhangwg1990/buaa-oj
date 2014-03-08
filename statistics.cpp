/*任意输入N个数，统计其中的正数个数和负数个数。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, m = 0, n = 0, k = 0;

	while (EOF != scanf("%d", &a))
	{
		if (a > 0) m++;
		else if (a < 0) n++;
		else if (a == 0) k++;
	}
	printf("There are %d positive numbers\n",m);
	printf("There are %d negative numbers\n",n);
	printf("There are %d 0\n",n);
	system("pause");
	return 0;
}