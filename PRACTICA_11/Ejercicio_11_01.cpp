// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores GUtierrez.
// Fecha creación: 04/05/2026
// Número de ejercicio: 1

/*Escribe una función recursiva que reciba un número entero positivo y
devuelva la suma de sus dígitos. Por ejemplo: para el número 1234, el
resultado debería ser 10 (1 + 2 + 3 + 4)*/

#include <iostream>

using namespace std;

int suma_digital (int n);
int main ()
{
    int n;
    int res;

    cout<<"ingresar numero: ";
    cin>>n;

    res = suma_digital (n);
    cout<<"suma es: " <<res<<endl;

    return 0;
}
int suma_digital (int n)
{
    int res = 0;
    while (n > 0)
    {
        res= res + (n % 10);
        n= n/10;
    }
    return res;

}
