#include <iostream>
using namespace std;

int main ()

{

    int pinUtilizator = 1234, pin, erori = 0;

    do {

            cout <<"introduceti pinul ";
            cin >> pin;
            if (pin != pinUtilizator)
            erori ++;
          



    } while (erori < 3 && pin != pinUtilizator);

        if (erori<3)
          cout << "se incarca...";
          
          else  
            cout << "nu mai aveti incercari.";

}