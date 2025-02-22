#include <iostream>
using namespace std;

int main ()
    {
        int nrNorocos[5];
        /*cout << nrNorocos << endl; //adresa primului nr
        cout << &nrNorocos[0] << endl;
        cout << nrNorocos[2]<<endl;
        cout << *(nrNorocos+2)<<endl; //foloseste adresa primului elem si adauga 2
        */
       for (int i = 0; i<5; i++)
            {
                cout << "number"<<endl;
                cin >> nrNorocos[i];

            }        
            for (int i = 0; i<5; i++)
            {
                
                cout << *(nrNorocos+i)<<" ";


            }        
    }