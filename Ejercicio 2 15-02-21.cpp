#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	float n1, n2;
	float suma, resta, mult, div;
	cout << "\nIntroduzca un numero: ";
	cin >> n1;
	cout << "\nIntroduzca otro numero: ";
	cin >> n2;
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1/n2;
	cout << fixed << setprecision(2) << suma;
	cout << "\nSuma: " << fixed << setprecision(2) << suma;
	cout << "\nResta: " << resta;
	cout << "\nMultipicacion: " << mult;
	cout << "\nDivision: " << div;
	system("pause");
}
