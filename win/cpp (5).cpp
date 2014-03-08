#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c[60],temp;
	int i=0;
	int n=1;

	while((temp=getchar()) != EOF)
	{
		c[i]=temp;
		++i;
	}

	c[i]=EOF;
	i=0;

	while(c[i] != EOF)
	{
		if((c[i] > '0')&&(c[i] < '9'))
			++n;
		else if(c[i] == '.')
			break;
		++i;
	}

	printf("%d\n",n);
	system("pause");
}
	
	