#include <stdio.h>
void gaseste_max_si_aparitii(int mat[100][100], int n, int* max_val, int* count)
{
    *max_val = mat[0][0]; // Inițializăm cu elementul de pe diagonala secundară (colțul dreapta sus)
    *count = 0; // Apare cel puțin o dată

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= n - 1 - i)
            {
                if (mat[i][j] > *max_val)
                {
                    *max_val = mat[i][j];
                    *count = 0;
                }
                if(mat[i][j] == *max_val)
                {
                    (*count)++;
                }
            }
        }
    }
}
int main ()
{
    int n, mat[100][100];
    printf("introduce marimea matricei: ");
    scanf("%d", &n);

    printf("introduce valorile matricei: \n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    //afisare
    printf("matricea este: \n");
    for (int i=0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf ("\n");
    }

    printf("elementele triunghiului fata de diag secundare sunt: \n");
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<=n-1-i; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf ("\n");
    }


    // Variabile pentru maxim și numărul de apariții
    int max_val, count;
    gaseste_max_si_aparitii(mat, n, &max_val, &count);

    // Afișăm rezultatele
    printf("Valoarea maxima: %d\n", max_val);
    printf("Numarul de aparitii: %d\n", count);

    return 0;
}