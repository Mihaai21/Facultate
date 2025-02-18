#include <iostream>
using namespace std;
int n, cif;
int nrpare = 0;
int main ()
{
    cout << "Introduceti numarul n: ";
    cin >> n;
    while (n!=0)
    {
        cif = n%10;
        if (cif%2==0)
        {
            nrpare ++;
        }
        n=n/10;
    }
    cout << nrpare << endl;
    return 0;


}