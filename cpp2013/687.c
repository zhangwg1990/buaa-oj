#include <stdio.h>

int main() {
    int m, n;
    double r, sum;
    while (EOF != scanf("%d %d %lf", &m, &n, &r)) {
        sum = m;
        while (n--) {
            sum *= 1 + r;
        }
        printf("%.3lf\n", sum - m);
    }
    return 0;
}
