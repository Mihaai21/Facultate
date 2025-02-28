#include <stdio.h>

void citire_matrice_vector(int a[100][100], int v[100], int *m, int *n)
{
    printf("Nr linii: ");
    scanf("%d", m);
    printf("Nr coloane: ");
    scanf("%d", n);

    for (int i = 0; i < *m; ++i)
        for (int j = 0; j < *n; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    for (int i = 0; i < *m; ++i)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void afisare_matrice_vector(int a[100][100], int v[100], int m, int n)
{
    printf("\nCantitatile fabricate intr-o luna pt %d produse (linii) in %d ateliere (coloane):\n", m, n);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Preturile de desfacere:\n");
    for (int i = 0; i < m; ++i)
        printf("%d ", v[i]);
}

void productia_valorica_totala(int a[100][100], int v[100], int m, int n)
{
    // Prin productie valorica totala inteleg ca trebuie sa fac inmultirea dintre
    // cantintatea totala a unui produs si pretul de desfacere a acelui produs.
    // Cantitatea totala pentru un singur produs este suma cantitatilor fabricate din toate ateliere.
    // Adica adun elementele unei linii, dupa care rezultatul il inmultesc cu v[index linie].

    int cant_tot_produs;
    int prod_valor_tot;

    for (int i = 0; i < m; ++i)
    {
        cant_tot_produs = 0;
        for (int j = 0; j < n; ++j)
            cant_tot_produs = cant_tot_produs + a[i][j];

        prod_valor_tot = v[i] * cant_tot_produs;
        printf("\nPentru produsul %d, productia valorica totala este: %d", i, prod_valor_tot);
    }
}

void main()
{
    int a[100][100], v[100], m, n;

    citire_matrice_vector(a, v, &m, &n);
    afisare_matrice_vector(a, v, m, n);
    productia_valorica_totala(a, v, m, n);
}