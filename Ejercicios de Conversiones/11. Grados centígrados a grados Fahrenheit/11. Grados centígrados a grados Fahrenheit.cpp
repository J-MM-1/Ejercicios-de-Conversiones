#include <iostream>
using namespace std; 

int main()
{
    float c, f;

    cout << "Ingrese una temperatura en c°: ";
    cin >> c;
    f = (c * 9 / 5) + 32;

    cout << "La temperatura en f° es: " << f << endl;

    return 0;
}