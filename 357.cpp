#include<stdio.h>
#include<stdlib.h>
int find(int a[], int n, int b)		//在长为n的数组a中查找并返回b的位置；
{
	int start = 0, end = n - 1, mid;
	mid = (n - 1) / 2;
	while (start <= end) {
		if (b == a[mid]) {
			return mid + 1;
		} else if (b < a[mid]) {
			start = mid + 1;
			mid = (start + end) / 2;
		} else {
			end = mid - 1;
			mid = (start + end) / 2;
		}
	}
	return 0;
}
int main()
{
	int a[10000], b[100000];
	int i, n, m, temp;
	while (EOF != scanf("%d", &n)) {
		for (i = 0; i < n; i++) {		//score input;
			scanf("%d", a + i);
		}
		scanf("%d", &m);
		for (i = 0; i < m; i++) {
			scanf("%d", &temp);
			b[i] = find(a, n, temp);
		}
		for (i = 0; i < m - 1; i++) {
			printf("%d ", b[i]);
		}
		printf("%d\n", b[i]);
	}
	system("pause");
	return 0;
}