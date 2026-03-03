// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Fecha creación: 27/02/2026


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numero;
int CarasPares = 0;
int Dado;

int main()
{
    srand(time(NULL));
    
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        Dado = rand() % 6 + 1;

        cout << "Lanzamiento " << i << ": " << Dado << endl;

        if (Dado % 2 == 0)
        {
            CarasPares++; 
        }
    }
    cout << "la frecuencia de repetición de las caras pares es: " << CarasPares << endl;

    return 0;
}