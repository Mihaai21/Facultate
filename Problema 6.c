#include <stdio.h>

int main() {
    int abonati, luni;
    int valori[100][100];
    float medie;

    printf("Introduceți numărul de abonați și numărul de luni: ");
    scanf("%d %d", &abonati, &luni);

    printf("Introduceți valorile conversațiilor telefonice pentru fiecare abonat și lună:\n");
    for (int i = 0; i < abonati; i++) {
        for (int j = 0; j < luni; j++) {
            printf("Valoare pentru abonatul %d, luna %d: ", i + 1, j + 1);
            scanf("%d", &valori[i][j]);
        }
    }

    for (int i = 0; i < abonati; i++) {
        int suma_abonat = 0;
        for (int j = 0; j < luni; j++) {
            suma_abonat += valori[i][j];
        }
        medie = (float)suma_abonat / luni;
        printf("Media pentru abonatul %d este: %.2f\n", i + 1, medie);
    }

    return 0;
}
