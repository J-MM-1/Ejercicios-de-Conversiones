#include <iostream>
using namespace std;

int main()
{
    int kg, hg, dag, g;

    cout << "Ingrese un valor en Kg: ";
    cin >> kg;
    hg = kg * 10;
    dag = kg * 100;
    g = kg * 1000;

    cout << "El valor en hg es: " << hg << endl;
    cout << "El valor en dag es: " << dag << endl;
    cout << "El valor en g es: " << g << endl;

    return 0;
}