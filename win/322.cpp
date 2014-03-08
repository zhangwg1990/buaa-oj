#include<stdio.h>
#include<stdlib.h>
int isleap(int n)
{
	if (((0 == n % 4) && (0 != n % 100)) || (0 == n % 400))
		return 1;
	else 
		return 0;
}
int main()
{
	int t, year, mon, feb;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &year, &mon);

		switch (mon) {
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
			printf("%d\n", 31);
			break;
		case 4 :case 6 : case 9 :case 11:
			printf("%d\n", 30);
			break;
		case 2 :
			if (1 == isleap(year))
				feb = 29;
			else 
				feb = 28;
			printf("%d\n", feb);
			break;
		default :
			break;
		}

	}
	system("pause");
	return 0;
}