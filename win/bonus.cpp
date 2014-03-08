/*题目：企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%，
高于100万元时，超过100万元的部分按1%提成，
从键盘输入当月利润I，求应发放奖金总数？*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	long i,temp1,temp2,temp3,temp4,temp5;
	temp1 = 0.1 * 100000;
	temp2 = temp1 + (200000 - 100000) * 0.075;
	temp3 = temp2 + (400000 - 200000) * 0.05;
	temp4 = temp3 + (600000 - 400000) * 0.03;
	temp5 = temp4 + (1000000 - 600000) * 0.015;

	printf("Please input your profit\n");
	scanf("%ld",&i);

	if(i <= 100000)
		printf("The bonus is %ld\n",(long)(0.1 * i));
	else if((i > 100000)&&(i <= 200000))
		printf("The bonus is %ld\n",(long)(temp1 + (i - 100000) * 0.075));
	else if((i > 200000)&&(i <= 400000))
		printf("The bonus is %ld\n",temp2 + (long)((i - 200000) * 0.05));
	else if((i > 400000)&&(i <= 600000))
		printf("The bonus is %ld\n",temp3 + (long)((i - 400000) * 0.03));
	else if((i > 600000)&&(i <= 1000000))
		printf("The bonus is %ld\n",temp3 + (long)((i - 400000) * 0.015));
	else if(i > 1000000)
		printf("The bonus is %ld\n",temp3 + (long)((i - 400000) * 0.01));

	system("pause");
	return 0;
}