#include <stdio.h>

int main() {
    int a, b;
    int c, d;
    int tmp;
    while (EOF != scanf("%d %d", &a, &b)) {
        c = a > b ? a : b;
        d = a + b - c;
        while (0 != d) {
            tmp = c % d;
            c = d;
            d = tmp;
        }
        printf("%d\n", a / c * b);
    }
    return 0;
}
