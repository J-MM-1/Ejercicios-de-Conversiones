#include <iostream>
using namespace std;

int main()
{
    float dl, kl;

    cout << "Ingrese un valor en dl: ";
    cin >> dl;
    kl = dl / 10000;

    cout << "El valor en ml es: " << kl << endl;

    return 0;
}