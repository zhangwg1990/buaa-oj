#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, flag;
	int buf1, buf2;
	unsigned int a, b;

	while (1) {
		scanf("%u %u", &a, &b);
		flag = n = 0;
		if ((0 == a) && (0 == b)) {
			return 0;
		} else {
			while ((0 != a) && (0 != b)) {
				buf1 = a % 10;
				buf2 = b % 10;
				a /= 10;
				b /= 10;
				if ((buf1 + buf2 + flag) >= 10) {
					n++;
					flag = 1;
				} else {
					flag = 0;
				}
			}
		}
		if (0 == n) {
			printf("No carry operation.\n");
		} else if (1 ==n) {
			printf("%d carry operation.\n", n);
		} else {
			printf("%d carry operations.\n", n);
		}
	}
	system("pause");
	return 0;
}