/*打印10~1000之间满足下列条件的所有数： 正序读和反序读都相同，例如：55、232等*/
#include<stdio.h>
#include<stdlib.h>

int reverse(int n)
{
	int temp = 0;
	while (n != 0)
	{
		temp *= 10;
		temp += (n % 10);
		n /= 10;
	}
	return temp;
}

int main()
{
	int i = 10;
	while (i <= 1000){
		if (i == reverse(i))
			printf("%d\t",i);
		i++;
	}
	puts("");
	system("pause");
	return 0;
}