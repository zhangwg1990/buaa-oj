/*Çós=1-2+3-4+5¡­¡­+99-100*/
#include<stdio.h>
#include<stdlib.h>

int an(int n)
{
	int flag;
	flag = (0 == (n % 2)) ? (-1) : (1);
	return flag * n;
}
int main()
{
	int i = 1, result = 0;
	while (i <= 100){
		result += an(i);
		i++;
	}
	printf("The result is %d\n",result);
	system("pause");
	return 0;
}