#include <iostream>
using namespace std;
int main()
{
float salariuBrut;
cout <<"introduceti salariul brut: ";
cin >> salariuBrut;
float salariuNet = salariuBrut*(1-0.25-0.10-0.10*(1-0.25-0.10));
cout << "salariul net este " << salariuNet << endl;
cout << "in 10 ani vei avea " << salariuNet*10 << endl;

return 0;
}
