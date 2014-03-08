/*题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。*/
#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{
	if ((1 == n)||(2 == n))return 1;
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
int main()
{
	int i;
	float sum = 0;

	for (i = 1;i <= 20;i++)
		sum += ((float)fibonacci(i + 2)) / ((float)fibonacci(i + 1));
	printf("The result is %f\n",sum);
	system("pause");
	return 0;
}