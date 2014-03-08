/*题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h = 100., sum = 0.;
	int i;

	for (i = 1;i <= 10;i++)
	{
		sum += h;
		h /= 2.;
		sum += h;
	}
	sum -= h;
	printf("The ball travelled %fm\n",sum);
	printf("The ball will jump at %fm at it's 10th bounce\n",h);
	system("pause");
	return 0;
}