#include <iostream>
using namespace std;

int main() {
    int cod1, cod2, cod3; // Declarăm variabile pentru codurile ASCII

    cout << "Introduceti 3 coduri ASCII: ";
    cin >> cod1 >> cod2 >> cod3; // Citim cele 3 coduri ASCII

    // Convertim codurile ASCII în caractere
    char c1 = char(cod1);
    char c2 = char(cod2);
    char c3 = char(cod3);

    cout << "Caracterele corespunzatoare: " << c1 << " " << c2 << " " << c3 << endl;

    return 0;
}