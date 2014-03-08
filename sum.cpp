/*计算：s=1+1/1+1/2+…… +1/n ，其中n由键盘输入。*/
#include<stdio.h>
#include<stdlib.h>

typedef struct fraction      //定义表示分数的结构体；
{
	long numerator;          //分子；
	long denominator;        //分母；
}fraction;

long f_lcm(long a, long b)            //用来求最小公倍数；
{
	long temp;
	if (a == b) return a;
	temp = (a > b) ? a : b;
	while (((temp % a) != 0)||((temp % b) != 0)) temp++;
	return temp;
}

fraction plus(fraction a, fraction b)       //用来实现相加的函数；
{
	long lcm;
	fraction result;
	if (0 == (a.numerator)) return b;
	if (0 == (b.numerator)) return a;
	lcm = f_lcm(a.denominator,b.denominator);
	result.denominator = lcm;
	result.numerator = ((lcm / a.denominator) * a.numerator) + ((lcm / b.denominator) * b.numerator);
	return result;
}

fraction simplify(fraction a)              //结果化简；
{
	long i;
	i = (a.denominator > a.numerator) ? a.numerator : a.denominator;
	while (((a.denominator % i) != 0)||((a.numerator % i) != 0)) i--;
	a.denominator /= i;
	a.numerator /= i;
	return a;
}
int main()
{
	long i, n;
	fraction sum, temp;
	temp.numerator = 1;
	temp.denominator = 1;
	sum.numerator = 1;
	sum.denominator = 1;

	puts("Please input n");
	scanf("%ld",&n);

	for (i = 1; i <= n; i++)
	{
		sum = plus(sum, temp);
		temp.denominator++;
	}

	printf("The result is %ld/%ld\n",sum.numerator,sum.denominator);
	system("pause");
	return 0;

}