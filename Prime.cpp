#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int number)
{
	int i;
	for (i = 2;i <= sqrt((float)number);i++)
		if (0 == (number % i))return 0;
	return 1;
}
int main()
{
	int i;
	for (i = 100;i <= 200;i++)
		if (1 == (isprime(i)))printf("%d\t",i);
	printf("\n");
	system("pause");
	return 0;
}