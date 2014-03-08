/*题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	c = getchar();

	switch (c){
	case 's': case 'S':
		if (('u' == getchar())||('U' == getchar())) {
				puts("Sunday");
				break;
			}
		else puts("Saturday");
		break;
	case 'm': case 'M':
		puts("Monday");
		break;
	case 't': case 'T':
		if (('u' == getchar())||('U' == getchar())){
			puts("Tuesday");
			break;
		}
		else puts("Thursday");
		break;
	case 'f': case 'F':
		puts("Friday");
		break;
	default: break;
	}
	system("pause");
	return 0;
}