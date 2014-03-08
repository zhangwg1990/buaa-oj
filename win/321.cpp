#include<stdio.h>
#include<stdlib.h>
int isok(int n)
{
	int i, temp;
	i = 0;
	temp = n;
	while (0 != temp) {
		i *= 10;
		i += temp % 10;
		temp /= 10;
	}
	if(n == i)
		return 1;
	else 
		return 0;
}

int main()
{
	int t, a, b, i, k;

	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		k = 0;
		for (i = a; i < b + 1; i++) {
			if (1 == isok(i))
				k++;
		}
		printf("%d\n", k);
	}
	system("pause");
	return 0;
}