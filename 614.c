#include<stdio.h>

int main() {
    char a[100];
    int i;
    int flag;

    while (NULL != gets(a)) {
        i = 0;
        flag = 0;
        while ('\0' != a[i]) {
            if ('H' == a[i] || 'Q' == a[i] || '9' == a[i]) {
                flag = 1;
                break;
            }
            i++;
        }
        if (1 == flag)
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}
