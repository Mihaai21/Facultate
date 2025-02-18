#include <iostream>
using namespace std;
int cifmax, n, cif;
int main ()
{
    cout << "Introduceti numarul n: ";
    cin >> n;
    cifmax = n%10;
    do
    {
        cif = n%10;
        if (cif>cifmax)
        {
            cifmax=cif;
        }

    n=n/10;
    }
    while (n);
    cout << cifmax << endl;
    return 0;

}