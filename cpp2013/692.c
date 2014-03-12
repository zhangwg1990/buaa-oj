#include <stdio.h>

int main() {
    int n, i;
    int a[40];
    a[0] = 1;
    a[1] = 2;
    for (i = 2; i < 36; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }
    while (EOF != scanf("%d", &n)) {
        printf("%d\n", a[n - 1]);
    }
    return 0;
}
