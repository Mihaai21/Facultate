#include <iostream>
using namespace std;

int main() 



{

    int l;
    cout << "latime= ";
    cin >> l;
    char a;
    cout << "caracter = ";
    cin >>a;
    cout << endl;

    for (int i=l; i>=1; i--)
        {
            for (int j=1; j<=i; j++)
                {
                    cout << a;
                }
                cout << endl;
        }


}
