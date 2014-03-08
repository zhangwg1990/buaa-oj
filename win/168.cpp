#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[30][30];
	int i, j, n, sum;
	int home_x, home_y;
	while (EOF != scanf("%d\n", &n)) {
		for (i = 0; i < n; i ++)
			gets(a[i]);

		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				if ('#' == a[i][j]) {
					home_x = i;
					home_y = j;
					break;
				}
			}
		}
		//get x,y;
		sum = 0;
		for (i = home_x + 1, j = home_y + 1; i < n && j < n; ++i, ++j)
			sum += a[i][j] - '0';
		for (i = home_x + 1, j = home_y - 1; i < n && j >= 0; ++i, --j)
			sum += a[i][j] - '0';
		for (i = home_x - 1, j = home_y + 1; i >= 0 && j < n; --i, ++j)
			sum += a[i][j] - '0';
		for (i = home_x - 1, j = home_y - 1; i >= 0 && j >= 0; --i, --j)
			sum += a[i][j] - '0';
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}