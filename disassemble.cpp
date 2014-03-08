/*题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	int n = 0;

	puts("Please input the number");
	scanf("%d",&number);

	while(0 != number)
	{
		n++;
		printf("%c",'0'+(number % 10));
		number /= 10;
	}
	printf("\n%d\n",n);
	system("pause");
	return 0;
}