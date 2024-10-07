#include <iostream>
using namespace std;

int main()
{
    float cm2, m2;

    cout << "Ingrese un valor en cm2: ";
    cin >> cm2;
    m2 = cm2 / 10000;

    cout << "El valor en m2 es: " << m2 << endl;

    return 0;
}