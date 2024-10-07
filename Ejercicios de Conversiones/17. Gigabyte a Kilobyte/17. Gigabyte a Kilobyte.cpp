#include <iostream>
using namespace std; 

int main()
{
    float Gb, Kb;

    cout << "Ingrese un valor en Gb: ";
    cin >> Gb;
    Kb = Gb * 1024 * 1024;

    cout << "De Gb a Kb es: " << Kb << endl;

    return 0;
}