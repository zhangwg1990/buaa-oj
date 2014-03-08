#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int c;
	long n=0;

	while((c = getchar()) != EOF)
	{
		if((c > '0')&&(c < '9'))
			++n;
		else if(c == '.')
			break;
	}
	

	printf("%d\n",n);

	system("pause");


}

