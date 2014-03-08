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

		if ((year > 0) && (mon >= 1) && (mon <= 12) && (day >= 1) && (day <= 12) && (hour >= 0) && (hour <= 23) && (min >= 0) && (min <= 59) && (sec >= 0) && ())
	}
	system("pause");
	return 0;
}