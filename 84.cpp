#include<stdio.h>
#include<stdlib.h>
//�������д�ñȽ��ҡ������������Լӵ�ע�Ͱɣ�
int main()
{
	int a[100], b[100];
	int n, i, j, temp;
	char c;
	while (EOF != scanf("%d %c", &n, &c)) {
		//printf("n = %d, c = %c", n, c);
		for (i = 0; i < n; i++) {
			scanf("%d", a + i);
			//printf("%d", a[i]);
		}
		j = 0;								//j������b��ѭ��������
		if (c == 'a') {						//���ַ�Ϊaʱ��������ַ�Ϊbʱ������Ǹ�������ģ�
			for (i = 0; i < n; i++) {		//�������������ŵ�b[]�У�
				if (1 == (a[i] % 2)) {
					b[j] = a[i];
					j++;
				}
			}
			n = j;								//��n����Ϊb[]��Ԫ�ظ�����
			for (i = 0; i < n - 1; i++) {		//ð������
				for (j = 0; j < n - 1 - i; j++) {
					if (b[j] > b[j + 1]) {
						temp = b[j];
						b[j] = b[j + 1];
						b[j + 1] = temp;
					}
				}
			}
			for (i = 0; i < n - 1; i++)		//������
				printf("%d ", b[i]);
			printf("%d\n", b[i]);
		}
		else if (c == 'b') {
			for (i = 0; i < n; i++) {
				if (0 == (a[i] % 2)) {
					b[j] = a[i];
					j++;
				}
			}
			n = j;
			for (i = 0; i < n - 1; i++) {
				for (j = 0; j < n - 1 - i; j++) {
					if (b[j] > b[j + 1]) {
						temp = b[j];
						b[j] = b[j + 1];
						b[j + 1] = temp;
					}
				}
			}
			for (i = 0; i < n - 1; i++)
				printf("%d ", b[i]);
			printf("%d\n", b[i]);
		}
	}

	system("pause");
	return 0;
}