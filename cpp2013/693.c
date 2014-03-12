#include <stdio.h>

int main() {
    int n, i;
    int a[100000];
    a[0] = 1;
    a[1] = 2;
    a[2] = 4;
    for (i = 3; i < 100000; i++) {
        a[i] = (a[i - 2] + a[i - 1] + a[i - 3]) % 12211060;
    }
    while (EOF != scanf("%d", &n)) {
        printf("%d\n", a[n - 1]);
    }

    return 0;
}


