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
    int suma = 0;

    cout<< "ingrese un numero: ";
    cin>> numero;

   for (int i = 1; i <= numero; i++)
   {
    suma += i;
   }
   cout << "total de suma es: "<< suma << endl ;
    return 0;
}