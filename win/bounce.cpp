/*��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h = 100., sum = 0.;
	int i;

	for (i = 1;i <= 10;i++)
	{
		sum += h;
		h /= 2.;
		sum += h;
	}
	sum -= h;
	printf("The ball travelled %fm\n",sum);
	printf("The ball will jump at %fm at it's 10th bounce\n",h);
	system("pause");
	return 0;
}