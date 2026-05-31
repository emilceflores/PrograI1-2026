// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 4

/*Búsqueda de texto en un archivo
Descripción: Escribe un programa que lea un archivo de texto llamado
datos.txt y permita al usuario buscar una palabra o frase específica. El
programa debe contar y mostrar cuántas veces aparece esa palabra o frase
en el archivo.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int buscartexto(string datos);

int main()
{
    int cantidad;
    
    cantidad = buscartexto("datos.txt");
    cout << "Cantidad de veces que aparece: "<< cantidad << endl;

    return 0;
}

int buscartexto(string datos)
{
    ifstream archivoentrada;
    archivoentrada.open(datos);

    string buscar;
    string palabra;
    int contador = 0;

    cout << "Ingrese la palabra a buscar: ";
    cin >> buscar;

    while (archivoentrada >> palabra)
    {
        if (palabra == buscar)
        {
            contador++;
        }
    }
    archivoentrada.close();
    return contador;
}