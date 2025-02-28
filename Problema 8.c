#include <stdio.h>

int main()
{
    int abonati, luni, prag;
    int valori[100][100];

    // Citirea numărului de abonați și luni
    printf("Introduceți numărul de abonați și numărul de luni: ");
    scanf("%d %d", &abonati, &luni);

    // Citirea valorilor conversațiilor telefonice
    printf("Introduceți valorile conversațiilor telefonice pentru fiecare abonat și lună:\n");
    for (int i = 0; i < abonati; i++)
    {
        for (int j = 0; j < luni; j++)
        {
            printf("Valoare pentru abonatul %d, luna %d: ", i + 1, j + 1);
            scanf("%d", &valori[i][j]);
        }
    }

    // Citirea valorii prag
    printf("Introduceți valoarea prag: ");
    scanf("%d", &prag);

    // Calcularea numărului de luni sub valoarea prag pentru fiecare abonat
    for (int i = 0; i < abonati; i++) {
        int numar_luni_sub_prag = 0;

        for (int j = 0; j < luni; j++)
        {
            if (valori[i][j] < prag)
            {
                numar_luni_sub_prag++;
            }
        }

        // Afișarea rezultatului pentru fiecare abonat
        printf("Abonatul %d are %d luni cu valori sub pragul %d.\n", i + 1, numar_luni_sub_prag, prag);
    }

    return 0;
}
