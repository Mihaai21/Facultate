#include <iostream>
#include <iomanip>
using namespace std;

int main ()
    
    {

        int in, la;
        char a;
        
        cout << "introduceti intaltimea ";
        cin >> in;
        cout << "introduceti latimea ";
        cin >> la;
        cout << "introduceti un caracter: ";
        cin >> a;


        for (int i=0; i<in; i++)
       {
            for (int j=0; j<la; j++)
            {       
                cout<< setw(3) << a;
            } 
            cout << endl;
       }
            



    }   