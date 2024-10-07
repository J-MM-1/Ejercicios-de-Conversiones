#include <iostream>
using namespace std; 

int main()
{
    float cm3, dm3;

    cout << "Ingrese un valor en cm3: ";
    cin >> cm3;
    dm3 = cm3 / 1000;

    cout << "El valor en dm3 es: " << dm3 << endl;

    return 0;
}