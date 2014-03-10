#include <stdio.h>

void init(int a[]) {
    int i;
    for (i = 0; i <= 100; i++)
        a[i] = 0;
}

int main() {
    int n;
    int a[101], b[101], c[101];
    int tmp;
    int i, j;
    int max, j_max;
    while (EOF != scanf("%d", &n)) {
        init(a);
        for (i = 0; i < n; i++) {
            scanf("%d", &tmp);
            a[tmp]++;
        }
        max = a[0];
        for (i = 0, j_max = 0; i <= 100; i++) {
            if (a[i] != 0) {
                c[j_max] = i;
                b[j_max++] = a[i];
            }
            if (a[i] > max)
                max = a[i];
        }
        for (i = 0; i < max; i++) {
            for (j = 0; j < j_max; j++) {
                if (b[j] >= max - i) {
                    printf("   *");
                } else {
                    printf("    ");
                }
            }
            printf("\n");
        }
        for (i = 0; i < j_max; i++)
            printf("%4d", c[i]);
        printf("\n\n");
    }
    return 0;
}
