#include <iostream> 
using namespace std;

int main()

{

    int a, b;
    cin >>a;
    while (a>0)
    {   
        b=b*10;
        b=b+a%10;
        a=a/10;
        
        



    }
    cout << b;

}