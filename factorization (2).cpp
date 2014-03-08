/*因式分解*/
#include<stdio.h>
#include<stdlib.h>
void fact(int number)
{
	int i;
	for (i=2;i <= number;i++)
	{
		if (i == number)
		{
			printf("%d\n",number);
			break;
		}
		if (0 == (number % i))
		{
			printf("%d * ",i);
			number /= i;
			fact(number);
			break;
		}
		
	}
}

int main()
{
	int i;

	puts("Please input the number");
	scanf("%d",&i);

	printf("The result is %d = ",i);
	fact(i);

	system("pause");
	return 0;
}