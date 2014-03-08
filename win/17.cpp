#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	char c;
	while (EOF != (c = getchar())){
		if (('I' == c) || ('i' == c)){
			c = getchar();
			if (('C' == c) || ('c' == c)){
				c = getchar();
				if (('P' == c) || ('p' == c)){
					c = getchar();
					if (('C' == c) || ('c' == c))
						n++;
				}
			}
		}
	}	
	printf("%d\n", n);
	system("pause");
	return 0;
}