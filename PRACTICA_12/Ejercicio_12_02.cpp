// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 2

/*Contador de palabras en un archivo
Descripción: Escribe un programa que lea un archivo de texto llamado
texto.txt y cuente cuántas palabras contiene. Una "palabra" se define como
cualquier secuencia de caracteres separada por espacios o saltos de línea.*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int contado_palabras(string texto);

int main()
{
    cout<<"numero de palabras es; "<< contado_palabras("texto.txt");
    
    return 0;
}

int contado_palabras(string texto)
{
    ifstream archivoentrada;
    archivoentrada.open ("texto.txt");
    int contador=0;
    char espacio = ' '; 
    string Lineatexto;
    while (!archivoentrada.eof())
    {
        getline(archivoentrada, Lineatexto);

        for (int i =0; i < Lineatexto.size(); i++)
        {
            if (Lineatexto[i] ==espacio )
            {
                contador++;
            }
        }
        contador++;
    }
    archivoentrada. close();
    
    return contador;
}
