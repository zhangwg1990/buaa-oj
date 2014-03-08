/*实现分数的相加*/
#include<stdio.h>
#include<stdlib.h>

typedef struct fraction      //定义表示分数的结构体；
{
	int numerator;          //分子；
	int denominator;        //分母；
}fraction;

int f_lcm(int a, int b)            //用来求最小公倍数；
{
	int temp;
	if (a == b) return a;
	temp = (a > b) ? a : b;
	while (((temp % a) != 0)||((temp % b) != 0)) temp++;
	return temp;
}

fraction plus(fraction a, fraction b)       //用来实现相加的函数；
{
	int lcm;
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
	int i;
	i = (a.denominator > a.numerator) ? a.numerator : a.denominator;
	while (((a.denominator % i) != 0)||((a.numerator % i) != 0)) i--;
	a.denominator /= i;
	a.numerator /= i;
	return a;
}
int main()
{
	fraction a, b, c;

	puts("Please input a's numerator");
	scanf("%d", &a.numerator);

	puts("Please input a's denominator");
	scanf("%d", &a.denominator);

	puts("Please input b's numerator");
	scanf("%d", &b.numerator);

	puts("Please input b's denominator");
	scanf("%d", &b.denominator);

	c = plus(a, b);
	c = simplify(c);

	printf("%d/%d + %d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,c.numerator,c.denominator);

	system("pause");
	return 0;

}