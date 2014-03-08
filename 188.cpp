#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a, b, c, d;
	char symbol;
	while (EOF != scanf("%lf %lf %lf %lf", &a, &b, &c, &d)) {
		scanf(" %c", &symbol);
		switch (symbol) {
		case '+' :
			printf("%.2lf %.2lf\n", a + c, b + d);
			break;
		case '-' :
			printf("%.2lf %.2lf\n", a - c, b - d);
			break;
		case '*' :
			printf("%.2lf %.2lf\n", a * c - b * d, b * c + a * d);
			break;
		case '/' :
			printf("%.2lf %.2lf\n",(a * c + b * d)/(c * c + d * d), (b * c - a * d)/(c * c + d * d));
			break;
		}
	}
	system("pause");
	return 0;
}