#include <iostream>
using namespace std;

int main()
{
    float k, f;

    cout << "Ingrese una temperatura en K°: ";
    cin >> k;
    f = (k - 273) * 9 / 5 + 32;

    cout.precision(4);
    cout << "La temperatura en f° es: " << f << endl;

    return 0;
}