#include <iostream>
using namespace std; 

int main()
{
    float c, k;

    cout << "Ingrese una temperatura en c°: ";
    cin >> c;
    k = c + 273;

    cout << "La temperatura en k° es: " << k << endl;

    return 0;
}