#include<stdio.h>
#include<string.h>

unsigned long long atoi(char s[]) {
    int len, i;
    unsigned long long result = 0;
    long long wght = 1;

    len = strlen(s);
    for (i = len - 1; i >= 0; i--, wght *= 2) {
        result += (s[i] - '0') * wght;
    }
    return result;
}

int main() {
    unsigned long long a, b, c, d;
    char s1[60], s2[60];
    int i, n;

    while (EOF != scanf("%s %s", s1, s2)) {
        a = atoi(s1);
        b = atoi(s2);
        c = a + b;
        d = (1ll << 60);
        n = 61;
        while (d) {
            if (d & c) {
                printf("%d ", n);
            }
            d >>= 1;
            n--;
        }
        printf("\n");
    }

    return 0;
}
