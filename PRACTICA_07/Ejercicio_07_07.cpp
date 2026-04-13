// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 06/04/2026

/* Programa que declare un vector de diez elementos enteros y pida números para
rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se
debe imprimir el vector (sólo los elementos introducidos)*/

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> numeros;

    int numero;
    int i = 0;

    while(i < 10 && numero >= 0)
    {
        cout << "Ingrese numero: ";
        cin >> numero;

        if(numero >= 0)
        {
            numeros.push_back(numero);
            i++;
        }
    }

    cout << "\nElementos ingresados:\n";
    for(int j = 0; j < numeros.size(); j++)
    {
        cout << numeros[j] << " - ";
    }

    return 0;
}