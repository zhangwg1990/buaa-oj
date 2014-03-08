#include<stdio.h>
#include<stdlib.h>

int isgf(int a)
{
	int reverse = 0;
	int b = a;
	while (0 != a){
		reverse *= 10;
		reverse += (a % 10);
		a /= 10;
	}
	if (b == reverse) return 1;
	else return 0;
}
int main()
{
	int n, i, j, k;
	int buf;
	scanf("%d", &n);

	while (n > 0){
		n--;
		i = 0;
		scanf("%d", &k);
		for (j = 1; j <= k; j++){
			scanf("%d",&buf);
			if (1 == isgf(buf)) i++;
		}
		printf("%d\n", i);
	}
	system("pause");
	return 0;
}