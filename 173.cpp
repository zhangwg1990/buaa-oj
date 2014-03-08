#include<stdio.h>
#include<stdlib.h>
int isleap (int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else 
		return 0;
}
int main()
{
	int year, mon, day, weekday, feb;
	int n;
	while (EOF != scanf("%d", &n)) {
		n++;
		year = 1999;
		mon = 0;
		day = 0;
		weekday = (n + 5) % 7;

		while (n > 146097) {
			n -= 146097;
			year += 400;
		}			//后面注意零碎的天也要算一年；

		if (n > 36525) {		//转化为2100开始的一百年；
			n -= 36525;
			year += 100;
			while (n > 36524) {
				n -= 36524;
				year += 100;
			}
			if (n > 1460) {
				n -= 1460;
				year += 4;
				while (n > 1461) {
					n -= 1461;
					year += 4;
				}
				if (n > 366) {
					n -= 366;
					year++;
					while (n > 365) {
						n -= 365;
						year++;
					}
					year++;
				} else {
					year++;
				}
			} else {
				while (n > 365) {
					n -= 365;
					year++;
				}
				year++;
			}
		} else {			//在前一百年中；
			while (n > 1461) {
				n -= 1461;
				year += 4;
			}
			if (n > 366) {
				n -= 366;
				year++;
				while (n > 365) {
					n -= 365;
					year++;
				}
				year++;
			} else {
				year++;
			}
		}		//the year is determined;

		if (1 == isleap(year))
			feb = 29;
		else 
			feb = 28;

		if (n > (306 + feb)) {
			mon = 12;
			n -= (306 + feb);
		} else if (n > (276 + feb)) {
			mon = 11;
			n -= (276 + feb);
		} else if (n > (245 + feb)) {
			mon = 10;
			n -= (245 + feb);
		} else if (n > (215 + feb)) {
			mon = 9;
			n -= (215 + feb);
		} else if (n > (184 + feb)) {
			mon = 8;
			n -= (184 + feb);
		} else if (n > (153 + feb)) {
			mon = 7;
			n -= (153 + feb);
		} else if (n > (123 + feb)) {
			mon = 6;
			n -= (123 + feb);
		} else if (n > (92 + feb)) {
			mon = 5;
			n -= (92 + feb);
		} else if (n > (62 + feb)) {
			mon = 4;
			n -= (62 + feb);
		} else if (n > (31 + feb)) {
			mon = 3;
			n -= (31 + feb);
		} else if (n > 31) {
			mon = 2;
			n -= 31;
		} else {
			mon = 1;
		}			//the mon is determined;
		day = n;

		printf("%d-", year);
		if (mon < 10)
			printf("0%d-", mon);
		else 
			printf("%d-", mon);

		if (day < 10)
			printf("0%d ", day);
		else
			printf("%d ",day);

		switch (weekday) {
		case 0 :
			printf("Sunday\n");
			break;
		case 1 :
			printf("Monday\n");
			break;
		case 2 :
			printf("Tuesday\n");
			break;
		case 3 :
			printf("Wednesday\n");
			break;
		case 4 :
			printf("Thursday\n");
			break;
		case 5 :
			printf("Friday\n");
			break;
		case 6 :
			printf("Saturday\n");
			break;
		}
	}
	system("pause");
	return 0;
}