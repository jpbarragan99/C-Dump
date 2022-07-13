#include<iostream>
using namespace std;
 
int main()
{
    int num1, num2;
 
    cout << "Introduzca los numeros : ";
    cin >> num1 >> num2;
 
    if (num1 % num2 == 0)
        cout << "El primer numero " << num1
             << " es divisible por el segundo "
             << num2;
    else
        cout << "El primer numero " << num1 
             << " no es divisible por el segundo "
             << num2;
             
    return 0;
}
