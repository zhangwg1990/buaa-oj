/*从键盘上任意输入一个字符串S，输出其中的数字字符。
例如输入为：sd12we$*55abc8，则输出结果为：12558*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	while (EOF != (c = getchar()))
	{
		if ((c >= '0') && (c <= '9'))
			putchar(c);
	}
	system("pause");
	return 0;
}