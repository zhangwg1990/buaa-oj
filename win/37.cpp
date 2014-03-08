#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int temp1;
	char temp2;
	double temp3;
	while (EOF != scanf("%d", &n)) {
		switch (n) {
		case 0:
			scanf("%d", &temp1);
			printf("%c\n", (char)temp1);
			break;
		case 1:
			scanf("%d", &temp1);
			printf("%lf\n", (double)temp1);
			break;
		case 2:
			scanf(" %c", &temp2);
			printf("%d\n", (int)temp2);
			break;
		case 3:
			scanf("%lf", &temp3);
			printf("%d\n", (int)temp3);
			break;
		default :
			break;
		}
	}
	system("pause");
	return 0;
}