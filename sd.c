#include<stdio.h>

int main() {
    char s[100];
    int i, j;
    while (NULL != gets(s)) {
        i = 0;
        while (':' != s[i]) i++;
        i++;
        j = 0;
        while ('\0' != s[i]) {
            while (' ' == s[i] && '\0' != s[i]) {
                i++;
            }
            if ('\0' != s[i]) {
                s[j] = s[i];
                j++;
                i++;
            }
            s[j] = '\0';
        }
        printf("%s\n", s);
    }
    return 0;
}
