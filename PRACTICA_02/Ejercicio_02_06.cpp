// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital..
// Fecha creación: 23/02/2026

/*Escriba un programa para leer dos valores enteros distintos entre sí, de tal
forma que si el primer número es mayor al segundo, genere una serie
descendente, caso contrario, muestre una serie ascendente; el factor de
incremento o decremento es la unidad.*/
#include <iostream>

using namespace std;

int numero1;
int numero2;

int main ()
{
    cout<< "ingersar primer numero: ";
    cin>> numero1;
    cout<< "ingersar segundo numero: ";
    cin>> numero2;

    if (numero1 > numero2)
    {
        for (int i = numero1; i >= numero2; i--) // i-- se usa para serie desendente
        {
            cout<<i<<endl;
        }
    }
    else
    {
        for (int i = numero1; i <= numero2; i++) // i++ se usa para serie asendente
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}