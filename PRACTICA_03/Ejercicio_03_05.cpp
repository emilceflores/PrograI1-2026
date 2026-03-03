// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Fecha creación: 27/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numero;
int numaleatorios;
int numprimos = 0;
int esprimo = 0; 

int main()
{
    srand(time(NULL));
    cout << "Ingrese la cantidad de numeros: ";
    cin >> numero;   
    
    for (int i = 0; i < numero; i++)
    {
        numaleatorios = rand() % 10000 + 1;
        cout << "Numero aleatorio es: " << numaleatorios << endl;

        if (numaleatorios >= 2)
        {
            for (int j = 2; j * j <= numaleatorios; j++)
            {
                if (numaleatorios % j == 0)
                {
                   esprimo = 1;
                }    
            }
            if (esprimo == 0)
            {
                numprimos ++; //solo suma numeros primos
            }
        }
    }
     cout << "cantidad de los numeros primos es: "<< numprimos << endl;
    return  0 ;
}      
    