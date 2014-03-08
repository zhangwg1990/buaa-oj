#include<stdio.h>
#include<stdlib.h>
int main()
{
	int base, number;
	int result[60];
	int i,n=0;
	


	printf("base=?\n");
	scanf("%d",&base);

	printf("number=?\n");
	scanf("%d",&number);

	i = number;
	while(i != 0)
	{
		result[n] = i % base;
		i /= base;
		n ++;
	}

	while(n > 0)
	{
		printf("%d",result[n-1]);
		n--;
	}

	printf("\n");

	system("pause");
}
