#include <iostream>
using namespace std;

int main()
{
    float Gb, Kb;

    cout << "Ingrese un valor en KB: ";
    cin >> Kb;
    Gb = Kb / (1024 * 1024);

    cout << "De KB a GB es: " << Gb << endl;

    return 0;
}