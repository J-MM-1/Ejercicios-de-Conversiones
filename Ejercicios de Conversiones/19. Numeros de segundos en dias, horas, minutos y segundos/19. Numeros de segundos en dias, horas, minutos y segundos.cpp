#include <iostream>
using namespace std;

int main()
{
	int d, h, m, s, f;
	cout << "Ingrese el numeros de dias: ";
	cin >> d;
	h = d * 24;
	m = h * 60;
	s = m * 60;
	cout << "El numero de segundos es: " << s;
	return 0;
}