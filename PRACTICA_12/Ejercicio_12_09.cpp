// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 9

/*Cifrado de un archivo de texto (Cifrado César)
Descripción: Escribe un programa que lea un archivo mensaje.txt, realice
un cifrado César con un desplazamiento de 3 sobre el texto y guarde el
resultado en un archivo mensaje_cifrado.txt. El cifrado César desplaza cada
letra por un número fijo de posiciones en el alfabeto (por ejemplo, A se
convierte en D, B en E, etc.).*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void cifrarmensaje(string mensaje);
int main()
{
    cifrarmensaje("mensaje.txt");

    return 0;
}

void cifrarmensaje(string mensaje)
{
    ifstream archivoentrada;
    archivoentrada.open(mensaje);

    ofstream archivosalida;
    archivosalida.open("mensaje_cifrado.txt");

    string linea;

    while (getline(archivoentrada, linea))
    {
        for (int i = 0; i < linea.size(); i++)
        {
            linea[i] = linea[i] + 3;
        }
        archivosalida << linea << endl;
    }
    archivoentrada.close();
    archivosalida.close();

    cout << "Mensaje cifrado correctamente." << endl;
}