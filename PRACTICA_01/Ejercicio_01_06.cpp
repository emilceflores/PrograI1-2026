// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026

/*Realice un programa que lea un valor entero y 
determine si se trata de un
número par o impar.*/

#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "ingresar numero: ";
    cin >> numero;

    if (numero% 2==0)
    {
        cout << "el numero es par " << endl;
    }
    else
    {
        cout << "el numero es impar " << endl;
    }
    

 return 0 ;
}