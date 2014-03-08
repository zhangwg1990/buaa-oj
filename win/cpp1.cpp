#include<stdio.h>
#include<stdlib.h>
int main()
{
	int base, number;
	float result=0;
	int i,j;
	


	printf("base=?");
	scanf("%d",base);

	printf("number=?");
	scanf("%d",number);

	i = number;
	while(i != 0)
	{
		j = i % base;
		i = i / base;
		result += j;
		result /= 10;
	}

	while( (int)result != result )
		result *= 10;

	printf("result=%.0f\n",result);
	system("pause");
}
