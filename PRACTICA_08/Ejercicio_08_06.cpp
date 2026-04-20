// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: Diseño digital..
// Fecha creación: 13/04/2023

/*Escribe un programa que invierta el orden de las palabras en una oración sin cambiar el
orden de los caracteres dentro de cada palabra.
• // Entrada: "Hola mundo desde C++"
• // Salida: "C++ desde mundo Hola"*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void separar_Palabras(string oracion, vector<string> &palabras);
void invertir_Palabras(vector<string> palabras);

int main()
{
    string oracion;
    vector<string> palabras;

    cout << "Ingrese una oracion: ";
    getline(cin, oracion);

    separar_Palabras(oracion, palabras);
    invertir_Palabras(palabras);

    return 0;
}

void separar_Palabras(string oracion, vector<string> &palabras)
{
    string aux = "";

    for(int i = 0; i < oracion.size(); i++)
    {
        if(oracion[i] != ' ')
        {
            aux += oracion[i];
        }
        else
        {
            palabras.push_back(aux);
            aux = "";
        }
    }

    palabras.push_back(aux);
}

void invertir_Palabras(vector<string> palabras)
{
    cout << "Oracion invertida:\n";

    for(int i = palabras.size() - 1; i >= 0; i--)
    {
        cout << palabras[i] << " ";
    }
}