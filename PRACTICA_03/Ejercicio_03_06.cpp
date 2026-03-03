// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Fecha creación: 27/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numero;
int de1anio = 0;
int de2anios = 0;
int de3anios = 0;
int paniales = 0;

int main()
{
    srand(time(NULL));
    cout << "Ingrese la cantidad de niños: ";
    cin >> numero;

    de1anio = rand()%(numero);
    de2anios = rand()%(numero - de1anio);
    de3anios = numero - de1anio - de2anios;

    paniales = de1anio * 6;
    paniales += de2anios * 3;
    paniales += de3anios * 2;

    cout << "Se tiene " << de1anio << " niños de 1 año" << endl;
    cout << "Se tiene " << de2anios << " niños de 2 años" << endl;
    cout << "Se tiene " << de3anios << " niños de 3 años" << endl;

    cout << "La guarderia utiliza por dia " << paniales << " pañales" << endl;

    return 0;
}