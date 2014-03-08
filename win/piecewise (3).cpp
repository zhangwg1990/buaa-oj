/*求下列分段函数的值。（a、b由键盘输入 ）*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, y;
	puts("Please input the a and b");
	scanf("%f %f", &a, &b);

	if (a == b)
		puts("The result is 0");
	else if (a > b)
		printf("The result is %f\n",a + b);
	else
		printf("The result is %f\n",a - b);

	system("pause");
	return 0;
}