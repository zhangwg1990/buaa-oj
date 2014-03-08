/*求数组a[8][8]中，主对角线和次对角线上各元素之和。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a[8][8], major = 0, sub = 0, n = 1;
	int i, j;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++){
			a[i][j] = n;
			n++;
		}

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
		{
			if (i == j) major += a[i][j];
			if (7 == (i + j)) sub += a[i][j];
		}

	printf("The sum of leading diagonal is %f\n",major);
	printf("The sum of secondary diagonal is %f\n",sub);

	system("pause");
	return 0;
}