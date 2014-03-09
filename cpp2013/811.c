#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse(char s[], int l, int r) {
    int i;
    for (i = l; i <= (l + r) / 2; i++) {
        swap(s + i, s + l + r -i);
    }
}

int main() {
    char s[100];
    int len;
    int i, j, k;
    int flag;
    char tmp;

    while (EOF != scanf("%s", s)) {
        len = strlen(s);
        flag = 1;
        for (i = 0; i < len; i++) {
            if (s[len - 1] + i != s[len - 1 - i]) {
                flag = 0;
                break;
            }
        }
        if (1 == flag) {
            printf("What?\n");
        } else {
            flag = 0;
            for (i = len - 2; i >= 0 && 0 == flag; i--) {
                for (j = len - 1; j > i; j--) {
                    if (s[j] > s[i]) {
                        swap(s + i, s + j);
                        reverse(s, i + 1, len - 1);
                        flag = 1;
                        break;
                    }
                }
            }
            if (0 == flag) {
                printf("What?\n");
            } else {
                printf("%s\n", s);
            }
        }
    }
    return 0;
}
