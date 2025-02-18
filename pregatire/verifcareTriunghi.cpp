#include <iostream>
using namespace std;
int main ()
{

    int a, b, c;
    cout << "Introduceti laturile triunghiului: ";
    cin >> a >> b >> c;
    if(a==b && b==c)
    {
        cout << "Triunghiul este echilateral";

    }
        else if(a!=b && b!=c && a!=c)
        {
        cout << "triunghiul este oarecare" << endl;
        }
            else 
            {
                 cout << "triunghiul este isoscel" << endl;
            }



    
}