#include <iostream>
using namespace std;

int main()
{
    float f, k;

    cout << "Ingrese una temperatura en f°: ";
    cin >> f;
    k = (f - 32) * 5 / 9 + 273;

    cout << "La temperatura en k° es: " << k << endl;

    return 0;
}