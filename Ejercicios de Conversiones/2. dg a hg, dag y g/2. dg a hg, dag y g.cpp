#include <iostream>
using namespace std;

int main()
{
    int dg;
    float hg, dag, g;

    cout << "Ingrese un valor en dg: ";
    cin >> dg;
    hg = dg / 1000;
    dag = dg / 100;
    g = dg / 10;

    cout << "El valor en hg es: " << hg << endl;
    cout << "El valor en dag es: " << dag << endl;
    cout << "El valor en g es: " << g << endl;

    return 0;
}