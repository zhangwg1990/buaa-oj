/*���Ը��ֱ�����������*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	short c = 1;
	int a = 1;
	long b = 1;
	long long d = 1;
	
	
	while ((a + 1) > a) a++;       //�ɹ� -2147483648~2147483647
	while ((b + 1) > b) b++;       //�ɹ� -2147483648~2147483647
	while ((c + 1) > c) c++;       //δ�ɹ�
	while ((d + 1) > d) d++;       //δ�ɹ�
	
	printf("The max of int is %d\n",a);
	printf("The max of long is %ld\n",b);
	printf("The max of long long is %lld\n",c);
	printf("The max of int is %hd\n",a);

	printf("The min of int is %d\n",a + 1);
	printf("The min of long is %ld\n",b + 1);
	printf("The min of long long is %ld\n",c + 1);
	printf("The min of int is %hd\n",a + 1);
	system("pause");
	return 0;
}