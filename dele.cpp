/*函数void dele(char *s)的功能是删除字符串s
中的所有数字字符和非字母字符，并将字符串压缩。
例如原字符串为：abc12ef5ghij8#%%yz，
处理后的字符串为：abcefghijyz*/
#include<stdio.h>
#include<stdlib.h>
#define N 1000

int ischar(char c)
{
	if ((c >= 'a')&&(c <= 'z')) return 1;
	if ((c >= 'A')&&(c <= 'Z')) return 1;
	return 0;
}

void dele(char *s)
{
	char *p, *q;
	p = s;
	while (1 == ischar(*p)) p++;
	q = p;
	while (0 == ischar(*q)) q++;
	while ('\0' != *q){
		if (1 == ischar(*q)){
			*p = *q;
			p++;
			q++;
		}
		if (0 == ischar(*q)) q++;
	}
	*p = '\0';
}

int main()
{
	char a[N];

	puts("Please input the string");
	scanf("%s",a);

	dele(a);

	printf("%s\n",a);
	system("pause");
	return 0;
}