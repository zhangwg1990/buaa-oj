/*题目：输入某年某月某日，判断这一天是这一年的第几天？*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year, month, day, result = 0, i;
	int leap = 0;
	int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	puts("Please input the year");
	scanf("%d",&year);

	puts("Please input the month");
	scanf("%d",&month);

	puts("Please input the day");
	scanf("%d",&day);

	if ((year % 4) == 0)leap = 1;

	if (leap == 0)
	{
		for (i = 0; i < (month - 1); i++)
			result += mon[i];
		result += day;
	}

	if (leap == 1)
	{
		for (i = 0; i < (month - 1); i++)
			result += mon[i];
		if ( month > 2) result++;
		result += day;
	}

	printf("This day is the %dth day in the year\n",result);
	system("pause");
	return 0;
}