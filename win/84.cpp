#include<stdio.h>
#include<stdlib.h>
//这个程序写得比较乱。。。。。所以加点注释吧；
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
		j = 0;								//j是数组b的循环变量；
		if (c == 'a') {						//当字符为a时，后面的字符为b时的情况是复制这里的；
			for (i = 0; i < n; i++) {		//把奇数跳出来放到b[]中；
				if (1 == (a[i] % 2)) {
					b[j] = a[i];
					j++;
				}
			}
			n = j;								//将n设置为b[]的元素个数；
			for (i = 0; i < n - 1; i++) {		//冒泡排序；
				for (j = 0; j < n - 1 - i; j++) {
					if (b[j] > b[j + 1]) {
						temp = b[j];
						b[j] = b[j + 1];
						b[j + 1] = temp;
					}
				}
			}
			for (i = 0; i < n - 1; i++)		//输出结果
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