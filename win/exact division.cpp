/*输出200～1000之间能被7整除的数，并统计其个数。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 200, n = 0;

	while (i <= 1000){
		if (0 == (i % 7)){
			printf("%d\t",i);
			n++;
		}
		i++;
	}
	printf("\ntotal = %d\n",n);
	system("pause");
	return 0;
}