#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, t, n, temp, sum;

	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);

		sum = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &temp);
			if (0 == temp % 2)
				sum += temp;
		}

		if (0 == sum)
			printf("%d\n", -1);
		else 
			printf("%d\n", sum);

	}
	system("pause");
	return 0;
}