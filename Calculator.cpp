#include <iostream>
using namespace std;

int main()

{

float a, b;
char operatie;

    cout << "Introduceti operatia" << endl;
    cin >> a >> operatie >> b;

        switch (operatie)        
        {
            case '-': cout << a << operatie << b << "=" << a - b; break;
            case '+': cout << a << operatie << b << "=" << a + b; break;
            case '/': cout << a << operatie << b << "=" << a / b; break;
            case '*': cout << a << operatie << b << "=" << a * b; break;
            case '%':
             bool EsteaIntreg, EstebIntreg;
             
             EsteaIntreg=((int)a == a);
             EstebIntreg=((int)b==b);
             
                if(EsteaIntreg && EstebIntreg)
                cout << a << operatie << b << "=" << (int)a % (int)b;
                
                else
                    cout << "Nu este valid";
                    break;



            default: cout << "Nu este operatie valida!" << endl; break;



        }
    


   

}