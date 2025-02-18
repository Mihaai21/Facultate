#include <stdio.h>
void find_days_below_target(int sales[][100], int m, int n, int target)
{
for (int j = 0; j < n; j++)
{
int total_sales = 0;
for (int i = 0; i < m; i++)
{
total_sales += sales[i][j];
}
if (total_sales < target) {
printf("Ziua %d: Vânzări totale = %d\n", j + 1, total_sales);
}
}
}
int main() {
int m, n, target;
printf("Introduceți numărul de produse (m): ");
scanf("%d", &m);
printf("Introduceți numărul de zile (n): ");
scanf("%d", &n);
printf("Introduceți ținta de vânzări: ");
scanf("%d", &target);
int sales[100][100];
printf("Introduceți vânzările:\n");
for (int i = 0; i < m; i++)
{
for (int j = 0; j < n; j++)
{
printf("Produsul %d, ziua %d: ", i + 1, j + 1);
scanf("%d", &sales[i][j]);
}
}
printf("Zilele cu vânzări sub țintă:\n");
find_days_below_target(sales, m, n, target);
return 0;
}
