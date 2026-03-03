// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital..
// Fecha creación: 23/02/2026

#include <iostream>

using namespace std;

int main ()
{
    int numero;
    long  sumaTotal =0 ; // long long sirve para guardar números mucho más grandes que un int
    long factorial =1 ;

    cout<< "ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero ; i++)
    {
        factorial *= i; // Calcula el factorial progresivamente
        
        sumaTotal += factorial;
    }
    cout<< "suma de factoriales es: "<< sumaTotal<<endl;
   
    return 0;
}