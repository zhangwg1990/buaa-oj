/*题目：输入两个正整数m和n，求其最大公约数和最小公倍数。*/
#include<stdio.h>
#include<stdlib.h>

int gcd(int m, int n)
{
	int i;
	i = (m < n)?m:n;
	while(1)
	{
		if ((0 == (m % i))&&(0 == (n % i)))
			return i;
		i--;
	}
	
}

int lcm(int m, int n)
{
	int i;
	i = (m > n)?m:n;
	while (1)
	{
		if ((0 == (i % m))&&(0 == (i % n)))
			return i;
		i++;
	}
}


int main()
{
	int m, n;
	puts("Please input the m and n");
	scanf("%d %d",&m,&n);

	printf("The GCD is %d\n",gcd(m,n));
	printf("The LCM is %d\n",lcm(m,n));

	system("pause");
	return 0;
}