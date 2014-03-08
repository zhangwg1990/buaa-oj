#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isprime(int n)
{
	int i, end;
	end = (int)sqrt((double)n) + 1;

	if (1 == n)
		return 0;
	else if (2 == n)
		return 1;
	else {
		for (i = 2; i < end; i++) {
			if (0 == n % i)
				return 0;
		}
		return 1;
	}
}
int main()
{
	int t, temp;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &temp);
		if (1 == isprime(temp))
			printf("prime\n");
		else 
			printf("%d\n", temp);
	}
	system("pause");
	return 0;
}