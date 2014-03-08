#include<stdio.h>
#include<stdlib.h>
int value(char buf[])
{
	int i = 0, sum = 0;
	while ('\0' != buf[i]) {
		sum += buf[i];
		i++;
	}
	return sum;
}
int main()
{
	char buf[100];
	int i, n, a[100], temp, max;
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf("%s", buf);
			a[i] = value(buf);
		}
		max = 0;
		for (i = 0; i < n; i++) {
			if (max < a[i])
				max = a[i];
		}
		printf("%d\n", max);
	}
	system("pause");
	return 0;
}