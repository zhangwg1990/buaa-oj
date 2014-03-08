#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cube(int number)
{
	int result = 0;
	while (0 != (number / 10))
	{
		result += (int)pow((number % 10),3.0);
		number /= 10;
	}
	result += (int)pow(number,3.0);
	return result;
}

int main()
{
	int i;

	for (i = 100;i <= 999;i++)
		if (i == cube(i)) printf("%d\t",i);
	printf("\n");
	system("pause");
	return 0;
}