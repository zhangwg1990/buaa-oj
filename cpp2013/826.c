#include<stdio.h>

int main() {
    int n, x;
    int rlt;
    while (EOF != scanf("%d %d", &n, &x)) {
        if (0 == n && 0 == x)
            break;
        if (1 == n) {
            printf("1\n");
        } else {
            rlt = x + 1;
            n--;
            while (--n) {
                rlt = (rlt * (x + 1)) % 100007;
            }
            printf("%d\n", rlt);
        }
    }
    return 0;
}
