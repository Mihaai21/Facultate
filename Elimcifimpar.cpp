#include <iostream>
using namespace std;
int nrnou=0;
int p=1;
int n, cif;
int main ()
{
    cout << "Introduceti numarul n: ";
    cin >> n;
    while (n!=0)
    { cif = n%10;
        if (cif % 2 == 0)
        {
            nrnou=nrnou+cif*p;
            p=p*10;
        }
      n=n/10;
    }
    cout << nrnou << endl;
    return 0;





}