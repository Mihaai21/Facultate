#include <iostream>
using namespace std;

int main ()
{

 //schimbare de variab cu 3 variab
    //int a = 10;
    //int b = 20;
    //int temp = a; // temp este 10
    //a=b; // a este 20
   // b=temp;
   //cout << a << b;
//schimbare de variab cu 2 variab

int a = 20;
int b = 10;

a = a + b; //30 a = suma
b = a - b; //20 b = suma - b
a = a - b; //10 a = suma - noul b
cout << a << "," << b;

}
