#include <iostream>
using namespace std;

int main ()

{

    int a, i=1, nr=1;
    cout <<"introduceti un numar ";
    cin >> a;
     
    if (a==0)
     cout << 1;
        else
        {
            
            for (i=1; i<=a; i++)
                {
                    nr=nr*i;
                }

                cout << a << "!=" << nr;


        }







}