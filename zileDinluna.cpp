#include <iostream>
using namespace std;

int main()

{
    //Pentru an bisect - an % 4 == 0 && an % 100 != 0 || an % 400 == 0)

    int an, luna;
    cout << "Anul, luna: " << endl;
    cin >> an >> luna;

    switch (luna)
    
    {
        case 2:(an % 4 == 0 && an % 100 != 0 || an % 400 == 0)?
        cout<< "29 zile are luna": cout <<  "28 de zile are luna"; break;
        case 4:
        case 6:
        case 9:
        case 11:cout<< "30 zile are luna"; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout << "31 zile are luna"; break;

        default: cout << "Nu este valid";
    
    }




}