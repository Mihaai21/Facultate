#include <iostream>
#include <cmath>
using namespace std;
int n, og, cn;
int main ()
{
cout<<"Introduceti numarul n: ";
cin >> n;
cn = n;
while (n!=0)
    {
    og = og*10+n%10;
    n=n/10;

    }
    if (cn == og)
    cout << "Numarul este palindrom";
    else
    cout << "Numarul nu este palindrom";
    return 0;

}

