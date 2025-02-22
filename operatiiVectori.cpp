#include <iostream>
using namespace std;

/*int faMin(int numere[], int marime)
{
    int min = numere[0];
    for(int i = 1; i<marime; i++)
    {
        if (numere[i]<min)
        min = numere[i];
    } 
    return min;
}
int faMax(int numere[], int marime)
{
    int max = numere[0];
    for(int i = 1; i<marime; i++)
    {
        if (numere[i]>max)
        max = numere[i];
    } 
    return max;
}
*/
void faMinMax(int numere[], int marime, int *min, int *max)
{
    for(int i = 1; i<marime; i++)
    {
        if (numere[i]>*max)
        *max = numere[i];
        if (numere[i]<*min)
        *min = numere[i];
    } 
}
int main()
{
    int numere[5] = {5, 4, -2, 29, 6};
    /*cout << "minimum este "<<faMin(numere, 5) << endl;
    cout << "maximul este "<<faMax(numere, 5);
    */
   int min = numere[0];
   int max = numere [0];
   faMinMax(numere, 5, &min, &max);
   cout << "minimul este "<< min << endl;
   cout << "maximul este "<<max<<endl;
    }   