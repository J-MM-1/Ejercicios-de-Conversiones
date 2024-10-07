#include <iostream>
using namespace std; 

int main()
{
    float k, c;

    cout << "Ingrese una temperatura en K°: ";
    cin >> k;
    c = k - 273;

    cout.precision(4);
    cout << "La temperatura en c° es: " << c << endl;

    return 0;
}