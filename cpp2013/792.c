#include<stdio.h>

int main() {
    int m, n;
    int a[500000];
    int i, j;
    int tmp;

    a[0] = 0;
    while (EOF != scanf("%d %d", &n, &m)) {
        for (i = 1; i <= n; i++) {
            scanf("%d", &tmp);
            a[i] = tmp + a[i - 1];
        }
        while (m--) {
            scanf("%d %d", &i, &j);
            printf("%d\n", a[j] - a[i - 1]);
        }
        printf("\n");
    }
    return 0;
}
