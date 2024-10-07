#include <iostream>
using namespace std;

int main()
{
    float cm, m;

    cout << "Ingrese un valor en cm: ";
    cin >> cm;
    m = cm / 100;

    cout << "El valor en m es: " << m << endl;

    return 0;
}