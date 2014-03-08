/*题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到
第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？*/

#include<stdio.h>
#include<stdlib.h>

int fibonacci(int month)
{
	if(month <= 2)return 1;
	return (fibonacci(month - 1) + fibonacci(month - 2));
}

int main()
{
	int month;
	printf("Please input the month\n");
	scanf("%d",&month);
	printf("Now, we have %d rabbits\n",fibonacci(month));
	system("pause");
	return 0;
}