// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores GUtierrez.
// Fecha creación: 04/05/2026
// Número de ejercicio: 1

/*Realizar un algoritmo recursivo, dado un vector de números enteros,
retorne la suma de sus elementos.*/

#include <iostream>

using namespace std;

void cargar_vector(int vector[], int cantidad);
int suma_vector(int vector[], int cantidad);
int main()
{
    int vector[100];
    int cantidad;
    int resultado;

    cout << "Cantidad de elementos: ";
    cin >> cantidad;

    cargar_vector(vector, cantidad);
    resultado = suma_vector(vector, cantidad);
    cout << "La suma es: " << resultado << endl;

    return 0;
}

void cargar_vector(int vector[], int cantidad)
{
    int posicion;
    for (posicion = 0; posicion < cantidad; posicion++)
    {
        cout << "Elemento " << posicion << ": ";
        cin >> vector[posicion];
    }
}

int suma_vector(int vector[], int cantidad)
{
    int resultado;
    int suma_restante;

    if (cantidad == 0)
    {
        return 0;
    }

    suma_restante = suma_vector(vector, cantidad - 1);
    resultado = vector[cantidad - 1] + suma_restante;

    return resultado;
}