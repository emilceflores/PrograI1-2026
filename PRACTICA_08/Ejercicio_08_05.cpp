// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: Diseño digital..
// Fecha creación: 13/04/2023

/* Escribe un programa que valide si una cadena ingresada cumple con el formato básico
de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@' y al
menos un punto '.' después del '@').
• // Entrada: "usuario@example.com"
• // Salida: "Correo electrónico válido"
• // Entrada: "usuarioexample.com"
• // Salida: "Correo electrónico inválido"*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void guardar_Correos(vector<string> &lista);
bool validar_Correo(string correo);

int main()
{
    vector<string> correos;

    guardar_Correos(correos);

    cout << "\nResultados:\n";
    for(int i=0; i<correos.size(); i++)
    {
        cout << correos[i] << " - ";

        if(validar_Correo(correos[i]))
            cout << "Correo electronico valido\n";
        else
            cout << "Correo electronico invalido\n";
    }

    return 0;
}

void guardar_Correos(vector<string> &lista)
{
    int N;
    cout << "Cuantos correos va a ingresar: ";
    cin >> N;

    string correo;

    for(int i=0; i<N; i++)
    {
        cout << "Correo " << i+1 << ": ";
        cin >> correo;
        lista.push_back(correo);
    }
}

bool validar_Correo(string correo)
{
    int arroba = 0;
    int posicion_Arroba = -1;
    bool puntoDespues = false;

    for(int i=0; i<correo.size(); i++)
    {
        if(correo[i] == '@')
        {
            arroba++;
            posicion_Arroba = i;
        }
    }

    if(arroba != 1) return false;

    for(int i=posicion_Arroba + 1; i<correo.size(); i++)
    {
        if(correo[i] == '.')
        {
            puntoDespues = true;
        }
    }

    return puntoDespues;
}