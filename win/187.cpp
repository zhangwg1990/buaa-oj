#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*��������������̲�ס���Լ�һ�£���������̫�����ˡ�����ʼʱ����ÿ��������n��
�Ҷ��ӵ�һ����ʼ�㣬�㵽��n���������ʱ�ˣ��������˶��Ҳ��ʱ�ˣ�����뵽����취��
Ȼ����ˣ���ˬ.*/
int isprime(int n)
{
	int i = 2, flag = 0, edge;
	edge = (int)sqrt((double)n) + 1;
	if (2 == n)
		return 1;
	else {
		while (i <= edge) {
			if (0 == (n %i))
				return 0;
			else 
				++i;
		}
		return 1;
	}
}
int main()
{
	int i = 1, test = 2, a[1000];
	int n;
	a[0] = 2;
	while (i <= 1000) {
		if (1 == isprime(test)) {
			a[i - 1] = test;
			i++;
			test++;
		}else {
			test++;
		}
	}
	//for (i = 0; i < 1000; i++) printf("%d\t", a[i]);
	while (EOF != scanf("%d", &n)) {
		printf("%d\n", a[n - 1]);
	}
	system("pause");
	return 0;
}