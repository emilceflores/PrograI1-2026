// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/04/2026


/*Crea una función que reciba un String de cualquier tipo y se encargue de poner en
mayúscula la primera letra de cada palabra.
- No se pueden utilizar operaciones del lenguaje que lo resuelvan directamente.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string capitalizar_Texto(string texto);

int main()
{
    string texto;

    cout << "Ingrese texto: ";
    getline(cin, texto);

    string resultado = capitalizar_Texto(texto);

    cout << "Resultado: " << resultado;

    return 0;
}

string capitalizar_Texto(string texto)
{
    vector<char> resultado;

    bool nuevaPalabra = true;

    for(int i=0; i<texto.size(); i++)
    {
        char letra = texto[i];

        if(letra == ' ')
        {
            resultado.push_back(letra);
            nuevaPalabra = true;
        }
        else
        {
    
            if(nuevaPalabra && letra >= 'a' && letra <= 'z')
            {
                letra = letra - 32; // convertir a mayuscula
            }

            resultado.push_back(letra);
            nuevaPalabra = false;
        }
    }

    
    string nuevo = "";// convertir vector a string
    for(int i=0; i<resultado.size(); i++)
    {
        nuevo += resultado[i];
    }

    return nuevo;
}