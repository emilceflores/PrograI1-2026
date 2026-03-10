// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Sumatoria de Naturales: Realice una función que reciba un número entero
positivo N y calcule la suma de todos los números desde 1 hasta N mediante un
ciclo.*/

#include <iostream>
using namespace std;

int numero;
int suma =0;
int suma_naturales (int numero);

int main()
{
    cout<<"Ingrsar un numero: ";
    cin>>numero;
    
    cout<<"La suma de los numeros desde 1 hasta "<< numero << " es: "<< suma_naturales (numero)<< endl;

    return 0;
}
int suma_naturales (int numero)
{
    for (int i = 1; i <= numero; i++)
    {
        suma= suma +i;
    }
    return suma;

}