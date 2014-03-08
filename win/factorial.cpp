/*题目:利用递归方法求5!*/
#include<stdio.h>
#include<stdlib.h>

long factorial(int n)
{
	if (1 == n)return 1;
	return (n * factorial(n - 1));
}

int main()
{
	int i;

	puts("Please input n");
	scanf("%d",&i);

	printf("%d! = %ld\n",i,factorial(i));
	system("pause");
	return 0;
}