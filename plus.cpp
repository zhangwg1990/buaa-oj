/*ʵ�ַ��������*/
#include<stdio.h>
#include<stdlib.h>

typedef struct fraction      //�����ʾ�����Ľṹ�壻
{
	int numerator;          //���ӣ�
	int denominator;        //��ĸ��
}fraction;

int f_lcm(int a, int b)            //��������С��������
{
	int temp;
	if (a == b) return a;
	temp = (a > b) ? a : b;
	while (((temp % a) != 0)||((temp % b) != 0)) temp++;
	return temp;
}

fraction plus(fraction a, fraction b)       //����ʵ����ӵĺ�����
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

fraction simplify(fraction a)              //�������
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