// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Fecha creación: 27/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numero;
long sumaTotal =0 ; 
long factorial =1 ;

int main()
{
    srand(time(NULL));
    numero = rand()% 10 + 1;
    cout << "El numero generado es: " << numero << endl;

    if (numero > 0 && numero <= 10)
    {
        for (int i = 1; i <= numero; i++)
        {
            factorial *= i;
        }
        
    }
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}