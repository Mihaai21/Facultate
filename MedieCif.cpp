#include <iostream>
using namespace std;
int n,nr, medie;
int s;
int main()
{
cout << "Introduceti numarul n: ";
cin >> n;
    while (n!=0)
    {
        s=s+n%10;
        nr++;
        n=n/10;
    }

    if (nr >0)
    medie = s/nr;
    cout << medie;
}