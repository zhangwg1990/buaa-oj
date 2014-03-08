/*编写一个函数，将字符串中的元音字母输出。例如字符串为“boy and girl”, 则输出为： oai*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	while ((c = getchar()) != EOF)
	{
		if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			putchar(c);
	}
	system("pause");
	return 0;
}