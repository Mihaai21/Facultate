#include <iostream>
using namespace std;

int recursiv(int m, int n)
        
    {
        if(m==n)
        return m;
        return m + recursiv(m+1,n);

    }



int main()
    
    {   
        int m=2,n=4,s;
        
        
        cout << recursiv(m,n);
    }