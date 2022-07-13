//Longitud de la circunferencia = 2*PI*Radio
//Area de la circunferencia = PI*Radio^2
//Volumen de la esfera = (4/3)*PI*Radio^3

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(void)
{
	const float PI = 3.1416;
	float radio;
	cout << "Introduce el valor del radio : ";
	cin >> radio;
	cout << "\nLongitud de la circunferencia : " << fixed << setprecision(2) << 2*PI*radio;
	cout << "\nArea del circulo: " << PI*pow(radio,2);
	cout << "\nVolumen de la esfera: " << (4/3)*PI*pow(radio,3) << endl;
	system("pause");
	
}
