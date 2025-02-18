#include <iostream>
using namespace std;
int p=1;
int n, d;
int main ()
{
    cout << "Introduceti numarul n: ";
    cin >> n;
    for (d=2; d<n/2; d++)
    if (n%d==0)
    cout << d << endl ;
}