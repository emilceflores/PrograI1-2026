// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 3

/*Almacenamiento de registros de estudiantes
Descripción: Escribe un programa que permita registrar la información de
varios estudiantes en un archivo de texto llamado estudiantes.txt. Cada
estudiante debe tener un nombre, una edad y un promedio de
calificaciones. Luego, el programa debe poder leer el archivo y mostrar toda
la información de los estudiantes en un formato organizado.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void archivosalida(string estudiantes);
void archivoentrada(string estudiantes);

int main()
{
    archivosalida("estudiantes.txt");
    cout << endl;

    archivoentrada("estudiantes.txt");

    return 0;
}

void archivosalida(string estudiantes)
{
    ofstream archivosalida;
    archivosalida.open(estudiantes);

    int cantidad;
    string nombre;
    int edad;
    float promedio;

    cout << "Ingresar cantidad de estudiantes: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "\nNombre: ";
        cin >> nombre;

        cout << "Edad: ";
        cin >> edad;

        cout << "Promedio: ";
        cin >> promedio;

        archivosalida << nombre << " "<< edad << " "<< promedio << endl;
    }

    archivosalida.close();
}

void archivoentrada(string estudiantes)
{
    ifstream archivoentrada;
    archivoentrada.open(estudiantes);

    string nombre;
    int edad;
    float promedio;

    cout << "\nDatos de los estudiantes:\n";

    while (archivoentrada >> nombre >> edad >> promedio)
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
        cout << endl;
    }

    archivoentrada.close();
}