/*从键盘任意输入一个大于0且小于1000的整数，然后输出此整数的所有整数因子。
例如：输入12，输出1，2，3，4，6，12。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number, i = 2;
	puts("Please input the number");
	scanf("%d", &number);

	printf("%d = 1 ",number);

	if (1 == number)
	{
		puts("");
		system("pause");
		return 0;
	}

	while (i != number)
	{
		if (0 == (number % i))
		{
			printf("* %d ",i);
			number /= i;
			i = 2;
		}
		i++;
	}
	printf("* %d\n",i);
	system("pause");
	return 0;
}