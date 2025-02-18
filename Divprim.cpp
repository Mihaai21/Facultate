#include <iostream>

using namespace std;

int main()
{
    //Citim și declarăm numărul n
    int n;
    int d;
    cin >> n;

    //Parcurgem divizorii primi
    for(int d = 2; d * d <= n; d++) { //Începem de la 2, ne interesează doar divizorii primi
        if(n % d == 0) { //Am găsit un divizor prim
            while(n % d == 0) { //Cât timp se împarte n la acest divizor, creștem puterea
                n = n / d;
            }
            cout << d;
        }
    }
    if(n > 1) { //Caz particular, când n mai conține un număr prim la final
        cout << n + d << endl;
    }
    return 0;
}