#include <stdio.h>
#include <string.h>

int main() {
    int i, tmp;
    int n;
    char a[36][3];
    strcpy(a[0],  "H");
    strcpy(a[1],  "He");
    strcpy(a[2],  "Li");
    strcpy(a[3],  "Be");
    strcpy(a[4],  "B");
    strcpy(a[5],  "C");
    strcpy(a[6],  "N");
    strcpy(a[7],  "O");
    strcpy(a[8],  "F");
    strcpy(a[9],  "Ne");
    strcpy(a[10], "Na");
    strcpy(a[11], "Mg");
    strcpy(a[12], "Al");
    strcpy(a[13], "Si");
    strcpy(a[14], "P");
    strcpy(a[15], "S");
    strcpy(a[16], "Cl");
    strcpy(a[17], "Ar");
    strcpy(a[18], "K");
    strcpy(a[19], "Ca");
    strcpy(a[20], "Sc");
    strcpy(a[21], "Ti");
    strcpy(a[22], "V");
    strcpy(a[23], "Cr");
    strcpy(a[24], "Mn");
    strcpy(a[25], "Fe");
    strcpy(a[26], "Co");
    strcpy(a[27], "Ni");
    strcpy(a[28], "Cu");
    strcpy(a[29], "Zn");
    strcpy(a[30], "Ga");
    strcpy(a[31], "Ge");
    strcpy(a[32], "As");
    strcpy(a[33], "Se");
    strcpy(a[34], "Br");
    strcpy(a[35], "Kr");

    while (EOF != scanf("%d", &n)) {
        for (i = 0; i < n; i++) {
            scanf("%d", &tmp);
            if (tmp <= 36) {
                printf("%s ", a[tmp - 1]);
            } else {
                printf("Usl ");
            }
        }
        printf("\n");
    }

    return 0;
}
