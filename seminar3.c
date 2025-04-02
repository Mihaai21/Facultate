#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1) Funcția care preia vectorul din fișier
int preluare_vector_1(const char* nume, float** v, int* n)
{
    FILE* f = fopen(nume, "r");
    float x;
    int er = 1;   // er = 1 => reușită, er = 0 => eroare
    *n = 0;

    if (f != NULL)
    {
        // a) Determinăm câte numere sunt în fișier
        while (fscanf(f, "%f", &x) == 1)
        {
            (*n)++;
        }
        // b) Alocăm memorie pentru vector
        *v = (float*)malloc((*n) * sizeof(float));

        // c) Revenim la începutul fișierului
        rewind(f);

        // d) Citim efectiv valorile
        int i = 0;
        while (fscanf(f, "%f", &x) == 1)
        {
            (*v)[i++] = x;
        }

        fclose(f);
    }
    else
    {
        er = 0; // Nu s-a putut deschide fișierul
    }

    return er;
}

// 2) Funcția care scrie întregul vector într-un fișier
void scrie_fis_vector_1(const char* nume, float* v, int n)
{
    FILE* f = fopen(nume, "w");
    if (f == NULL)
    {
        printf("Eroare la deschiderea fișierului %s\n", nume);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%5.2f ", v[i]);
    }

    fclose(f);
}

// 3) Funcția care scrie doar elementele de pe poziții impare
void scrie_fis_vector_2(const char* nume, float* v, int n)
{
    FILE* f = fopen(nume, "w");
    if (f == NULL)
    {
        printf("Eroare la deschiderea fișierului %s\n", nume);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        // i % 2 != 0 => poziții impare (index 1,3,5,...)
        if ((i % 2) == 0)
        {
            fprintf(f, "%5.2f ", v[i]);
        }
    }

    fclose(f);
}

// 4) Funcția main
int main()
{
    float* a = NULL;
    char nume[256];  // buffer pentru numele fișierelor
    int n = 0, er;

    printf("Numele fisierului de intrare: ");
    if (fgets(nume, sizeof(nume), stdin) == NULL)
    {
        printf("Eroare la citirea numelui de fișier.\n");
        return 1;
    }
    // Ștergem eventualul '\n' de la final
    nume[strcspn(nume, "\n")] = '\0';

    // Apelăm funcția de preluare a vectorului
    er = preluare_vector_1(nume, &a, &n);

    if (er == 0)
    {
        printf("\nNu s-a putut deschide fișierul %s\n", nume);
    }
    else
    {
        if (n == 0)
        {
            printf("Vectorul preluat nu are elemente.\n");
        }
        else
        {
            printf("Vectorul preluat are %d elemente:\n", n);
            for (int i = 0; i < n; i++)
            {
                printf("%5.2f ", a[i]);
            }
            printf("\n");

            // Cerem numele fișierului pentru a scrie tot vectorul
            printf("Numele fișierului pentru scrierea întregului vector: ");
            if (fgets(nume, sizeof(nume), stdin) != NULL)
            {
                nume[strcspn(nume, "\n")] = '\0';
                scrie_fis_vector_1(nume, a, n);
            }

            // Cerem numele fișierului pentru a scrie elementele impare
            printf("Numele fișierului pentru scrierea elementelor impare: ");
            if (fgets(nume, sizeof(nume), stdin) != NULL)
            {
                nume[strcspn(nume, "\n")] = '\0';
                scrie_fis_vector_2(nume, a, n);
            }

            // Eliberăm memoria
            free(a);
        }
    }

    return 0; // main se încheie cu return 0
}
