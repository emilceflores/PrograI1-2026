// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores GUtierrez.
// Fecha creación: 04/05/2026
// Número de ejercicio: 1

/*Implementa una función recursiva para calcular la potencia de un número.
La función debe recibir dos parámetros, la base a y el exponente n, y
devolver el valor de a^n. Evita usar la función pow de la biblioteca
estándar. Por ejemplo, potencia(2, 3) debería devolver 8*/

#include <iostream>

using namespace std;

int potencia(int base, int exponente);
int main()
{
    int base;
    int exponente;
    int res;

    cout << "Ingresar base: ";
    cin >> base;

    cout << "Ingresar exponente: ";
    cin >> exponente;

    res = potencia(base, exponente);
    cout << "Resultado: " << res << endl;

    return 0;

}

int potencia(int base, int exponente)
{
    int res=0;

    if (exponente == 0)
    {
        return 1;
    }
    res = potencia(base, exponente - 1);

    res = base * res;

    return res;
}