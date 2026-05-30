// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores GUtierrez.
// Fecha creación: 04/05/2026
// Número de ejercicio: 1

/*Implementa una función recursiva que devuelva el enésimo número en la
secuencia de Fibonacci. La secuencia de Fibonacci es una serie de
números donde cada número es la suma de los dos anteriores,
comenzando con 0 y 1.*/
#include <iostream>

using namespace std;

int fibonacci(int n);
int main()
{
    int n;
    int res;

    cout << "Ingresar posicion: ";
    cin >> n;

    res = fibonacci(n);
    cout << "Resultado: " << res << endl;

    return 0;
}

int fibonacci(int n)
{
    int res;
    int a;
    int b;

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    a = fibonacci(n - 1);
    b = fibonacci(n - 2);

    res = a + b;

    return res;
}