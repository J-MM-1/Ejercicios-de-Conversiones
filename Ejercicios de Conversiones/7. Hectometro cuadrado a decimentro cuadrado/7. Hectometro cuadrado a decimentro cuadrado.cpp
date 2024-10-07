#include <iostream>
using namespace std;

int main()
{
    float hm, dm;

    cout << "Ingrese un valor en hm: ";
    cin >> hm;
    dm = hm * 1000000;

    cout << "El valor en dm es: " << dm << endl;

    return 0;
}