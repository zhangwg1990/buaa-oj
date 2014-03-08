#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    char b[1024];
    int len_a;
    char c, *p;
    int i, j;

    scanf("%s", a); 
    getchar();

    printf("%s", a); 
    len_a = strlen(a);

    i = 0;
    while (1) {

        c = getchar();
        if ('\n' != c && EOF != c) {
            b[i] = c;
            i++;
        } else {
            b[i] = '\0';
            while (NULL != (p = strstr(b, a))) {
                for (j = 0; j < len_a; j++) {
                    *p = ' ';
                    p++;
                }   
            }   

            j = 0;
            while ('\0' != b[j]) {
                if (' ' != b[j]) {
                    printf("%c", b[j]);
                }   
            }
            printf("\n");
            i = 0;
        }
        if (EOF == c)
            break;
    }
}