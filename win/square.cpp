#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long i = 1, temp1, temp2;
	
	while(1)
	{
		temp1 = (long)sqrt((double)(i + 100));
		temp2 = (long)sqrt((double)(i + 168));
		
		if(((i + 100) == (temp1 * temp1)) && ((i + 168) == (temp2 * temp2)))
			break;
		i++;
	}

	printf("The result is %ld\n",i);
	system("pause");
}