/*��Ŀ����ҵ���ŵĽ������������ɡ�
����(I)���ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ����7.5%��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ�
�Ӽ������뵱������I����Ӧ���Ž���������*/

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