// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Fecha creación: 27/02/2026


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numero;
double cara = 0;
int moneda;

int main()
{
    srand(time(NULL));
    cout<< "Ingresar la cantidad de lanzamiento: ";
    cin >> numero;

    for (int i = 0; i < numero; i++)
    {
        moneda = rand() %(2);

        if (moneda == 0)
        {
            cara++;
        }
    }
    cout << "El porcentaje de veces que sale cara es: " << cara / numero << endl;
    cout << "El porcentaje de veces que sale cruz es: " << 1 - (cara / numero) << endl;


    return 0;
}