/*�Ӽ�����������һ������0��С��1000��������Ȼ������������������������ӡ�
���磺����12�����1��2��3��4��6��12��*/
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