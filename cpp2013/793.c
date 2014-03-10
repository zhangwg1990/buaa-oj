#include <stdio.h>

int main() {
    char s[10];
    int hour, min, sec;

    while (EOF != scanf("%s", s)) {
        hour = (s[0] - '0') * 10 + s[1] - '0';
        min = (s[3] - '0') * 10 + s[4] - '0';
        sec = (s[6] - '0') * 10 + s[7] - '0';
        printf("%d\n", hour * 3600 + min * 60 + sec);
    }
}
