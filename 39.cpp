#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, leap;
	int year, mon, day, hour, min, sec;
	scanf("%d", &n);
	while (n > 0) {
		n--;

		scanf("%d %d %d %d %d %d",&year, &mon, &day, &hour, &min, &sec);
		//printf("%d, %d, %d, %d, %d, %d", year, mon, day, hour, min, sec);
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			leap = 1;
		else 
			leap = 0;

		if (year < 0) {
			printf("Please wait for a moment!\n");
		} else if ((mon < 1) || (mon > 12)) {
			printf("Please wait for a moment!\n");
		} else if ((day < 1) || (day > 31)) {
			printf("Please wait for a moment!\n");
		} else if ((hour < 0) || (hour > 23)) {
			printf("Please wait for a moment!\n");
		} else if ((min < 0) || (min > 59)) {
			printf("Please wait for a moment!\n");
		} else if ((sec < 0) || (sec > 59)) {
			printf("Please wait for a moment!\n");
		} else if ((4 == mon) || (6 == mon) || (9 == mon) || (11 == mon)) {
			if (31 == day) {
				printf("Please wait for a moment!\n");
			} else
				printf("Good bye!\n");
		} else if (2 == mon) {
			if (0 == leap) {
				if (day > 28) {
					printf("Please wait for a moment!\n");
				} else
					printf("Good bye!\n");
			} else if (1 == leap) {
				if (day > 29)
					printf("Please wait for a moment!\n");
				else 
					printf("Good bye!\n");
			}
		} else 
			printf("Good bye!\n");
	}
	system("pause");
	return 0;
}