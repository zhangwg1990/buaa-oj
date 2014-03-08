#include<stdio.h>
#include<string.h>

void reverse(char a[]) {
    int len;
    int i;
    char temp;
    len = strlen(a);
    for (i = 0; i <= (len - 1) / 2; i++) {
        temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
}

void multi(char a[], char b, char c[]) {
    int i;
    int af = 0;
    int len;
    int tmp;
    len = strlen(a);
    for (i = 0; i < len; i++) {
        tmp = (a[i] - '0') * (b - '0') + af;
        c[i] = tmp % 10 + '0';
        af = tmp / 10;
    }
    if (af > 0) {
        c[i] = af + '0';
        c[i + 1] = '\0';
    } else {
        c[i] = '\0';
    }
}

void add(char c[], char b[], int ofst) {
    int i;
    int len;
    int af = 0;
    int tmp;
    len = strlen(b);
    for (i = 0; i < len; i++) {
        tmp = c[ofst + i] + b[i] - '0' - '0' + af;
        c[ofst + i] = tmp % 10 + '0';
        af = tmp / 10;
    }
    if (af > 0)
        c[ofst + i] = af + '0';
}

int main() {
    char a[1200], b[1200], c[2100];
    char pt[10][1200];
    int t;
    int i;
    int len_b;
    scanf("%d", &t);
    while (t--) {
        scanf("%s", a);
        scanf("%s", b);
        reverse(a);
        reverse(b);
        memset(c, '0', 2100);
        for (i = '0'; i <= '9'; i++) {
            multi(a, (char)i, pt[i - '0']);
        }
        multi(a, b[0], c);
        c[strlen(c)] = '0';
        len_b = strlen(b);
        for (i = 1; i < len_b; i++) {
            add(c, pt[b[i] - '0'], i);
        }
        for (i = 2099; c[i] == '0'; i--)
            ;
        c[i + 1] = '\0';
        reverse(c);
        printf("%s\n", c);
    } 
}
