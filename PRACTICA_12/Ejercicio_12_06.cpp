// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 6

/*Filtrado de registros de temperatura
Descripción: Escribe un programa que lea un archivo de texto llamado
temperaturas.txt, donde cada línea contiene el nombre de una ciudad
seguido de su temperatura promedio del día. El programa debe generar un
archivo altas_temperaturas.txt que solo incluya las ciudades con
temperaturas superiores a N°C.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void filtrar_temperaturas(string temperaturas);
int main()
{
    filtrar_temperaturas("temperaturas.txt");

    return 0;
}

void filtrar_temperaturas(string temperaturas)
{
    ifstream archivoentrada;
    archivoentrada.open(temperaturas);

    ofstream archivosalida;
    archivosalida.open("altas_temperaturas.txt");

    string ciudad;
    float temperatura;
    float limite;

    cout << "Ingrese la temperatura minima: ";
    cin >> limite;

    while (archivoentrada >> ciudad >> temperatura)
    {
        if (temperatura > limite)
        {
            archivosalida << ciudad << " "<< temperatura << endl;
        }
    }
    archivoentrada.close();
    archivosalida.close();

    cout << "Archivo generado correctamente." << endl;
}