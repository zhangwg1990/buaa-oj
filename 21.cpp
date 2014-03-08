#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, k, a, b;
	int i, max;
	scanf("%d", &n);
	while (n > 0){
		max = 0;
		n--;
		scanf("%d",&k);
		for (i = 1; i <= k; i++){
			scanf("%d %d", &a, &b);
			max = (max > a * b) ? (max) : (a * b);
		}
		printf("%d\n", max);
	}
	system("pause");
	return 0;
}