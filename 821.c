#include<stdio.h>

int main() {
    int n;
    int i, j;

    while (EOF != scanf("%d", &n)) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (0 == i % 2) {
                    printf("%4d", i * n + j + 1);
                } else {
                    printf("%4d", (i + 1) * n - j);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
