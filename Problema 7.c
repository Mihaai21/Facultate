#include <stdio.h>

int main() {
    int abonati, luni, valoare_cautata;
    int valori[100][100];

    // Citirea numărului de abonați și luni
    printf("Introduceți numărul de abonați și numărul de luni: ");
    scanf("%d %d", &abonati, &luni);

    // Citirea valorilor conversațiilor telefonice
    printf("Introduceți valorile conversațiilor telefonice pentru fiecare abonat și lună:\n");
    for (int i = 0; i < abonati; i++) {
        for (int j = 0; j < luni; j++) {
            printf("Valoare pentru abonatul %d, luna %d: ", i + 1, j + 1);
            scanf("%d", &valori[i][j]);
        }
    }

    // Citirea valorii care trebuie căutată
    printf("Introduceți valoarea conversației pe care doriți să o căutați: ");
    scanf("%d", &valoare_cautata);

    // Căutarea ultimei apariții a valorii pentru fiecare lună
    for (int j = 0; j < luni; j++) {
        int ultimul_abonat = -1; // Inițial nu s-a găsit niciun abonat

        for (int i = 0; i < abonati; i++) {
            if (valori[i][j] == valoare_cautata) {
                ultimul_abonat = i + 1; // Se salvează ultimul abonat găsit (indexul începe de la 1)
            }
        }

        // Afișarea rezultatului pentru luna curentă
        if (ultimul_abonat != -1) {
            printf("Pentru luna %d, ultimul abonat cu valoarea %d este: %d\n", j + 1, valoare_cautata, ultimul_abonat);
        } else {
            printf("Pentru luna %d, niciun abonat nu are valoarea %d.\n", j + 1, valoare_cautata);
        }
    }

    return 0;
}
