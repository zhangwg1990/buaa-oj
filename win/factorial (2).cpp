/*题目：求1+2!+3!+...+20!的和*/
#include<stdio.h>
#include<stdlib.h>

double factorial(int n)
{
	int i = 1;
	double product = 1;
	while (i <= n)
	{
		product *= i;
		i++;
	}
	return product;
}
int main()
{
	int i = 1;
	double sum = 0;
	
	while (i <= 20)
	{
		sum += factorial(i);
		i++;
	}
	printf("The result is %lf\n",sum);

	system("pause");
	return 0;
}