// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores GUtierrez.
// Fecha creación: 04/05/2026
// Número de ejercicio: 1

/*Realizar un algoritmo recursivo para calcular el máximo común divisor de
dos números enteros aplicando el algoritmo de Euclides.*/

#include <iostream>

using namespace std;

int mcd(int num1, int num2); //mcd = maximo comun divisor 
int main()
{
    int num1;
    int num2;
    int res;

    cout << "Ingresar primer numero: ";
    cin >> num1;

    cout << "Ingresar segundo numero: ";
    cin >> num2;

    res = mcd(num1, num2);
    cout << "Maximo Comun Divisor: " << res << endl;

    return 0;
}

int mcd(int num1, int num2)
{
    int res;
    int r;

    if (num2 == 0)
    {
        return num1;
    }

    r = num1 % num2;
    res = mcd(num2, r);

    return res;
}