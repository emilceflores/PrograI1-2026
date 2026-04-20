// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 13/04/2026

/*Escribe una función que reciba un texto y retorne verdadero o falso (Boolean) según
sean o no palíndromos.
Un Palíndromo es una palabra o expresión que es igual si se lee de izquierda a derecha
que de derecha a izquierda. NO se tienen en cuenta los espacios, signos de puntuación y
tildes.
Ejemplo: Ana lleva al oso la avellana.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool es_Palindromo(string texto);

int main()
{
    string texto;

    cout << "Ingrese texto: ";
    getline(cin, texto);

    if(es_Palindromo(texto))
        cout << "Es palindromo"; //palabra ,número o frase que se lee igual de izquierda a derecha que de derecha a izquierda 
    else
        cout << "No es palindromo";

    return 0;
}

bool es_Palindromo(string texto)
{
    vector<char> limpio;

    for(int i=0; i<texto.size(); i++)
    {
        if((texto[i] >= 'A' && texto[i] <= 'Z') ||
           (texto[i] >= 'a' && texto[i] <= 'z'))
        {
            char caracter = texto[i];

            // convertir a minuscula
            if(caracter >= 'A' && caracter <= 'Z')
                caracter = caracter + 32;

            limpio.push_back(caracter);
        }
    }

    int inicio = 0;
    int fin = limpio.size() - 1;

    while(inicio < fin)
    {
        if(limpio[inicio] != limpio[fin])
            return false;

        inicio++;
        fin--;
    }

    return true;
}