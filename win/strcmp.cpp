/*函数void comp(char *s1, *s2)的功能是比较字符串s1和字符串s2，
若字符串s1大于字符串s2，则函数返回1，
若字符串s1等于字符串s2，则函数返回0，
若字符串s1小于字符串s2，则函数返回-1。
（要求：不能调用库函数strcmp）*/
#include<stdio.h>
#include<stdlib.h>
#define N 100
int comp(char *s1,char *s2)
{
	char *p, *q;
	p = s1;
	q = s2;

	if (('\0' == *p) && ('\0' == *q)) return 0;
	if ('\0' == *p) return -1;
	if ('\0' == *q) return 1;

	while (1){
		if (*p > *q) return 1;
		else if (*p < *q) return -1;
		else{
			p++;
			q++;
		}
	if (('\0' == *p) && ('\0' == *q)) return 0;
	if ('\0' == *p) return -1;
	if ('\0' == *q) return 1;
	}
}


int main()
{
	char a[N], b[N];
	int result;

	puts("Please input string a");
	scanf("%s",a);
	puts("Please input string b");
	scanf("%s",b);

	result = comp(a,b);
	if (1 == result) puts("The string a is larger than string b");
	else if (-1 == result) puts("The string b is larger than string a");
	else puts("The string a is equal to string b");
	system("pause");
	return 0;
}