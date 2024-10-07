#include <iostream>
using namespace std;

int main()
{
    float f, c;

    cout << "Ingrese una temperatura en F°: ";
    cin >> f;
    c = (f - 32) * 5 / 9;

    cout.precision(3);
    cout << "La temperatura en c° es: " << c << endl;

    return 0;
}