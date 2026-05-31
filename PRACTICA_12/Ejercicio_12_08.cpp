// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 8

/*Contador de líneas, palabras y caracteres
Descripción: Escribe un programa que lea un archivo de texto llamado
documento.txt y cuente el número total de líneas, palabras y caracteres. Al
final, el programa debe mostrar estos totales en la consola.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void contardatos(string documento);
int main()
{
    contardatos("documento.txt");

    return 0;
}

void contardatos(string documento)
{
    ifstream archivoentrada;
    archivoentrada.open(documento);

    string linea;

    int lineas = 0;
    int palabras = 0;
    int caracteres = 0;

    while (getline(archivoentrada, linea))
    {
        lineas++;
        caracteres = caracteres + linea.size();
        palabras++;

        for (int i = 0; i < linea.size(); i++)
        {
            if (linea[i] == ' ')
            {
                palabras++;
            }
        }
    }

    archivoentrada.close();

    cout << "Cantidad de lineas: " << lineas << endl;
    cout << "Cantidad de palabras: " << palabras << endl;
    cout << "Cantidad de caracteres: " << caracteres << endl;
}