#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s[4];
	while (NULL != gets(s)) {
		//gets(s);
		for (int i = 0; i <3; i++)
			printf("s%d is %c\n", i, s[i]);
		//if (EOF == getchar())
			//return 0;
		{
			switch (s[1]) {
			case '+' :
				printf("%d\n", (s[0] - '0') + (s[2] - '0'));
				break;
			case '-' :
				printf("%d\n", (s[0] - '0') - (s[2] - '0'));
				break;
			case '*' :
				printf("%d\n", (s[0] - '0') * (s[2] - '0'));
				break;
			case '/' :
				printf("%.2lf\n", (double)(s[0] - '0') / (double)(s[2] - '0'));
				break;
			case '%' :
				printf("%d\n", (s[0] - '0') % (s[2] - '0'));
				break;
			default :
				break;
			}

	}
	}
	system("pause");
	return 0;
}