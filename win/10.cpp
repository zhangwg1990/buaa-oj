#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, score;
	scanf("%d", &n);
	while (n > 0){
		n--;
		scanf("%d", &score);
		if ((score >= 90) && (score <= 100))
			printf("A\n");
		else if ((score >= 80) && (score <= 89))
			printf("B\n");
		else if ((score >= 70) && (score <= 79))
			printf("C\n");
		else if ((score >= 60) && (score <= 69))
			printf("D\n");
		else if ((score >= 0) && (score <= 59))
			printf("E\n");
		else printf("Score is error!\n");
	}
	system("pause");
	return 0;
}