/*任意输入a[N][N]个数，找出并输出其中的最大数和最小数，以及它们的下标。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a[5][5];
	int i,j, max[2], min[2];

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%f",&a[i][j]);

	max[0] = max[1] = min[0] = min[1] = 0;
	
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] > a[max[0]][max[1]])
			{
				max[0] = i;
				max[1] = j;
			}
			if (a[i][j] < a[min[0]][min[1]])
			{
				min[0] = i;
				min[1] = j;
			}
		}

	printf("The max is a[%d][%d] = %f\n", max[0], max[1], a[max[0]][max[1]]);
	printf("The max is a[%d][%d] = %f\n", min[0], min[1], a[min[0]][min[1]]);

	system("pause");
	return 0;
}