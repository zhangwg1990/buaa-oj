/*编写一函数: int substring(char *str, char *sub), 
判断字符串sub是否是字符串str的子串，若是子串，则返回子串的位置，否则返回 -1*/
#include<stdio.h>
#include<stdlib.h>
#define N 100
int substring(char *str, char *sub)      //比想象的难多了
{
	int n = 0, i, position = 1;          //n用来表示字串长度；position用来指示字串位置；
	char *p, *q, *r;       //p指向字串第一个字符；q,r分别在原字符串中指向与字串长度相等的串的头尾；
	p = sub;
	q = str;
	while ('\0' != *p){        //得到字串长度
		p++;
		n++;
	}
	p = sub;
	r = str + n - 1;

	while (1)
	{
		while (*p != *q){
			position++;
			q++;
			r++;
			if (*r == '\0') return -1;
		}
		for (i = 1; i <= n - 1 ;i++)
			if (*(p + i) != *(q + i))break;
		if (i == n) return position;
		q++;
		r++;
		position++;
	}
}


int main()
{
	char a[N], b[N];
	int result;
	
	puts("Please input the main string");
	scanf("%s",a);
	puts("Please input the sub string");
	scanf("%s",b);

	result = substring(a, b);
	if (-1 == result) puts("This sub string does not match the main string");
	else printf("The sub string is at the %d char of the main string\n",result);

	system("pause");
	return 0;
}