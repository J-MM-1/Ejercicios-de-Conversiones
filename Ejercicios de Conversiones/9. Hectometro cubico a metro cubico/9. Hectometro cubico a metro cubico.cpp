#include <iostream>
using namespace std; //9

int main()
{
    float hm3, m3;

    cout << "Ingrese un valor en hm3: ";
    cin >> hm3;
    m3 = hm3 * 1000000;

    cout << "El valor en m3 es: " << m3 << endl;

    return 0;
}