#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;

	for(i = 1; i <= 4;i++)
		for(j = 1; j <= 4;j++)
			for(k = 1; k <= 4;k++)
			{
				if( (i != j)&&(i != k)&&(j != k) )
					printf("%d\t",100 * i + 10 * j + k);
			}

	printf("\n");
	system("pause");
}