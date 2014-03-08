#include<stdio.h>
#include<stdlib.h>
#define Pi 3.1415926
int main()
{
	double *r;
	int i = 0, n;
	scanf("%d", &n);
	r = (double *)malloc(n * sizeof(double));
	for (i = 0; i < n; i++)
		scanf("%lf", r + i);
	for (i = 0; i < n; i++){
		if (*(r + i) >= 0)
			printf("%.2lf %.2lf\n",Pi * (*(r + i)) * (*(r + i)), 2 * Pi * (*(r + i)));
		else printf("Impossible!\n");
	}
	system("pause");
	return 0;
}