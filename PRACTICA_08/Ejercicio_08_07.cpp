// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/04/2026

/*Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void eliminar_Digitos(string texto, vector<char> &resultado);

int main()
{
    string texto;
    vector<char> resultado;

    cout << "Ingrese texto: ";
    cin >> texto;

    eliminar_Digitos(texto, resultado);

    cout << "Resultado: ";
    for(int i=0; i<resultado.size(); i++)
    {
        cout << resultado[i];
    }

    return 0;
}

void eliminar_Digitos(string texto, vector<char> &resultado)
{
    for(int i=0; i<texto.size(); i++)
    {
        if(!(texto[i] >= '0' && texto[i] <= '9'))
        {
            resultado.push_back(texto[i]);
        }
    }
}