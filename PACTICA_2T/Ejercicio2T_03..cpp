// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez.
// Fecha creación: 11/05/2026

/*3. Escribe una función que reciba un texto y retorne verdadero o falso (Boolean) según
sean o no palíndromos.
Un Palíndromo es una palabra o expresión que es igual si se lee de izquierda a derecha
que de derecha a izquierda. NO se tienen en cuenta los espacios, signos de puntuación y
tildes.
Ejemplo: Ana lleva al oso la avellana.*/


#include <iostream>
#include <string>

using namespace std;

bool palindromo(string texto);

int main() 
{
    string texto;
    
    cout << "Ingrese un texto: ";
    cin >> texto;

    if(palindromo(texto))
    {
        cout << "Es palindromo";
    }
    else
    {
        cout << "No es palindromo";
    }

    return 0;
}

bool palindromo(string texto) 
{
    string aux = "";

    for(int i = 0; i < texto.size(); i++) 
    {
        if(texto[i] != ' ') 
        {
            if(texto[i] >= 'A' && texto[i] <= 'Z')
            {
                texto[i] += 32;
            }

            aux += texto[i];
        }
    }

    for(int i = 0, j = aux.size() - 1; i < j; i++, j--) 
    {
        if(aux[i] != aux[j])
        {
            return false;
        }
    }

    return true;
}