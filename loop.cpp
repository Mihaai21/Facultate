#include <iostream>
using namespace std;

int main()
{

int i, c=0;
cout << "Introduceti nr = ";
cin >> i;
if (i==0)
cout << "Ati introdus numarul 0";
    else
    {
    if(i<0)
        i= -1 * i;
        while (i>0)
        {
            i=i/10;
            c++; 
        }
        cout << "Numarul introdus are " << c << " cifre" <<endl;
    }



}