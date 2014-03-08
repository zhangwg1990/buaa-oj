#include<stdio.h>
int leap(int year) {
	if ((0 == year % 4 && 0 != year % 100) || (0 == year % 400))
		return 1;
	else 
		return 0;
}
int main() {
	int t, year, mon, day;
	int i, n;		//n为从1999-12-31开始经过了的天数；
	int date[400];
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char week[7][5] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
	//freopen("data.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);

	date[0] = 0;
	for (i = 2001; i < 2400; i++) {
		if (1 == leap(i - 1)) {
			date[i - 2000] = date[i - 2001] + 366;
		} else {
			date[i - 2000] = date[i - 2001] + 365;
		}
	}

	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d", &year, &mon, &day);
		while (year < 2000) year += 400;
		while (year > 2399) year -= 400;
		n = date[year - 2000];
		if (1 == leap(year))
			month[1] = 29;
		else 
			month[1] = 28;
		for (i = 0; i < mon - 1; i++)
			n += month[i];
		n += day;
		printf("%s\n", week[(n + 4)% 7]);
	}
	return 0;
}