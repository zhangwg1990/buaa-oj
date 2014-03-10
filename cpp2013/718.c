#include <stdio.h>

int main() {
    int a[4];
    int i, j, tmp;
    while (EOF != scanf("%d %d %d %d", a + 0, a + 1, a + 2, a + 3)) {
        for (i = 3; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (a[j + 1] > a[j]) {
                    tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                }
            }
        }
        printf("%d\n", a[0] + a[1]);
    }
    return 0;
}
