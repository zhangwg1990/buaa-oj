#include <stdio.h>

int judge(int a) {
    int i, n;
    int aoi[50];
    int flag;
    
    i = 0;
    while (0 != a) {
        aoi[i++] = a % 10;
        a /= 10;
    }
    n = i;
    flag = 1;
    for (i = 0; i < n; i++) {
        if (aoi[i] != aoi[n - 1 -i]) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int a, b;
    int i, n;
    while (EOF != scanf("%d %d", &a, &b)) {
        n = 0;
        for (i = a; i <= b; i++) {
            if (1 == judge(i)) {
                n++;
            }
        }
        printf("%d\n", n);
    }

    return 0;
}
