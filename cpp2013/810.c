#include <stdio.h>

int comp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int n, s;
    int i, j, k;
    int a[1000];
    int max, num;
    while (EOF != scanf("%d %d", &n, &s)) {
        for (i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        qsort(a, n, sizeof(a[0]), comp);
        max = 2;
        while (a[0] + a[1] + a[max] <= s) {
            max++;
        }
        num = 0;
        for (i = 0; i < max - 2; i++) {
            for (j = i + 1; j < max - 1; j++) {
                for (k = j + 1; k < max; k++) {
                    if (a[i] + a[j] + a[k] <= s) {
                        num++;
                    }
                }
            }
        }
        printf("%d\n", n * (n - 1) * (n - 2) / 6 - num);
    }

    return 0;
}
