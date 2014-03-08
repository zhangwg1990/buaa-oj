#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,temp;
	int *a;

	scanf("%d",&n);

	a = (int*)malloc(n * n * sizeof(int));

	for(i = 0;i < n;i++)
	{
		for(j = 0 ; j < n; j++)
		{
			scanf("%d",a+n*i+j);
		}
	}

	for(i = 0;i < n;i++)
	{
		for(j = 0 ; j < n; j++)
		{
			printf("%d  ",*(a+n*i+j));
		}
		printf("\n");
	}

	printf("\n");

	for(i = 0;i < n;i++)
	{
		for(j = 0 ; j <= i; j++)
		{
			      temp = *(a+n*i+j);
			*(a+n*i+j) = *(a+n*j+i);
			*(a+n*j+i) = temp;
		}
	}

	for(i = 0;i < n;i++)
	{
		for(j = 0 ; j < n; j++)
		{
			printf("%d  ",*(a+n*i+j));
		}
		printf("\n");
	}

	system("pause");
	return 0;
}