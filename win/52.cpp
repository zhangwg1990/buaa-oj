#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[100], b[100];
	int t, i, sum;
	scanf("%d", &t);
	while (0 != t) {
		t--;
		scanf("%s", a);
		scanf("%s", b);
		sum = 0;
		i = 0;
		while ('\0' != a[i]) {
			sum += a[i] - '0';
			i++;
		}
		i = 0;
		while ('\0' != b[i]) {
			sum += b[i] - '0';
			i++;
		}
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}