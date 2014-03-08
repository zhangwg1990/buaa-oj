#include<stdio.h>
#include<stdlib.h>
int main()
{
	int base,number;
	char result[60];
	int i,j,n;
	n = 0;

	printf("base=?\n");
	scanf("%d",&base);

	printf("number=?");
	scanf("%d",&number);

	i = number;
	while(i != 0)
	{
		j = i % base;
		i /= base;
		if( j < 10 )
			result[n] = '0' + j;
		else
			result[n] = 'A' + j -10;
		n ++;
	}

	n -= 1;
	while( n >= 0)
	{
		printf("%c",result[n]);
		--n;
	}

	printf("\n");

	system("pause");

}