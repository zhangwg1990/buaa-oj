#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*对于这个程序，我忍不住夸自己一下，“我真是太机智了”。开始时对于每个给定的n，
我都从第一个开始算，算到第n个，结果超时了，后来改了多次也超时了，最后想到这个办法，
然后过了，很爽.*/
int isprime(int n)
{
	int i = 2, flag = 0, edge;
	edge = (int)sqrt((double)n) + 1;
	if (2 == n)
		return 1;
	else {
		while (i <= edge) {
			if (0 == (n %i))
				return 0;
			else 
				++i;
		}
		return 1;
	}
}
int main()
{
	int i = 1, test = 2, a[1000];
	int n;
	a[0] = 2;
	while (i <= 1000) {
		if (1 == isprime(test)) {
			a[i - 1] = test;
			i++;
			test++;
		}else {
			test++;
		}
	}
	//for (i = 0; i < 1000; i++) printf("%d\t", a[i]);
	while (EOF != scanf("%d", &n)) {
		printf("%d\n", a[n - 1]);
	}
	system("pause");
	return 0;
}