#include <iostream>
using namespace std;

int main ()
    {

    int i, j, a;

    for (i=1; i<=10; i++)
    {
        for (j=1; j<=10; j++)
        
        {
            a=i*j;
            cout << i << "*"<< j << "=" << a << endl;
        }
        cout << endl;
    }
    }
