#include <stdio.h>

int main() {
    int n, m, k;
    int cont;
    while (EOF != scanf("%d %d %d", &n, &m, &k)) {
        cont = 0;
        while (0 != n) {
            if (k == n % m) {
                cont++;
            }
            n /= m;
        }
        printf("%d\n", cont);
    }
    return 0;
}
