/*	韩信点兵。
韩信有一队兵，他想知道有多少人，便让士兵排队报数：
按从1至5报数，最末一个士兵报的数为1；
按从1至6报数，最末一个士兵报的数为5；
按从1至7报数，最末一个士兵报的数为4；
最后再按从1至11报数，最末一个士兵报的数为10。
编程求韩信至少有多少兵？*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1;
	while(1)
	{
		if( (i %  5) !=  1){i++;  continue;}
		if( (i %  6) !=  5){i++;  continue;}
		if( (i %  7) !=  4){i++;  continue;}
		if( (i % 11) != 10){i++;  continue;}
		printf("HanXin has %d soldiers\n",i);
		printf("n %% 5 = %d\t",i %  5);
		printf("n %% 6 = %d\t",i %  6);
		printf("n %% 7 = %d\t",i %  7);
		printf("n %%11 = %d\n",i % 11);
		break;
	}
	system("pause");
}