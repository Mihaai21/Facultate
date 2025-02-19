#include <iostream>
using namespace std;

int main ()

{
    //BMI CALCULATOR
    // kg/(m*m)
    //Underweight < 18.5
    //Normal weight 18.5 - 24.9
    //Overweight > 25


    float kg, m, bmi;
    cout << "Introduceti greutatea si inaltimea ";
    cin >> kg >> m;
    bmi=kg/(m*m);

        if (bmi < 18.5)
            
            cout << "Subponderal" << endl;
        
        else if (bmi > 25)

            cout << "Supraponderal" << endl;

        else 

            cout << "Normal" << endl;

        cout << "bmi este egal cu " << bmi;


            





}