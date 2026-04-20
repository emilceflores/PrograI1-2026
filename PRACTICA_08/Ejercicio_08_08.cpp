// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: Diseño digital..
// Fecha creación: 13/04/2023

/* Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un
delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void dividir_Tokens(string texto, char delimitador, vector<string> &tokens);

int main()
{
    string texto;
    char delimitador;
    vector<string> tokens;

    cout << "Ingrese cadena: ";
    getline(cin, texto);

    cout << "Ingrese delimitador: ";
    cin >> delimitador;

    dividir_Tokens(texto, delimitador, tokens);

    cout << "\nResultado:\n";
    for(int i=0; i<tokens.size(); i++)
    {
        cout << tokens[i] << endl;
    }

    return 0;
}

void dividir_Tokens(string texto, char delimitador, vector<string> &tokens)
{
    string aux = "";

    for(int i=0; i<texto.size(); i++)
    {
        if(texto[i] != delimitador)
        {
            aux += texto[i];
        }
        else
        {
            tokens.push_back(aux);
            aux = "";
        }
    }
    tokens.push_back(aux);
}