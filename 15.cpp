#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{	
	int a, b, c;
	int n, delta;
	scanf("%d", &n);
	while (n > 0){
		n--;
		scanf("%d %d %d", &a, &b, &c);
		delta = b * b - 4 * a * c;
		if (delta < 0)
			printf("No Answer\n");
		else if (0 == delta)
			printf("%.2lf\n", (double)(-b) / (2 * (double)a));
		else
			printf("%.2lf\n", fabs(sqrt((double)delta) / (double)a));
	}
	system("pause");
	return 0;
}