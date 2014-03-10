#include <stdio.h>

int main() {
    int n;
    int count;
    while (EOF != scanf("%d", &n)) {
        count = 0;
        while (1 != n) {
            if (1 == n % 2) {
                n = n * 3 + 1;
            } else {
                n /= 2;
            }
            count ++;
        }
        printf("%d\n", count);
    }
    return 0;
}
