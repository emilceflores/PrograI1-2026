// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Verificación de Paridad: Diseñe una función booleana que determine si un número
entero es par. La función debe retornar true si es par y false en caso contrario.*/

#include <iostream>
using namespace std;

bool es_par (int numero);
int numero =0;
int main()
{
    cout<< "Ingrese numero:";
    cin>> numero;
    if (es_par (numero))
    {
        cout<<numero<<" es true "<< endl;
    }
    else
    {
        cout<<numero<<" es false "<< endl;
    }
    
    return 0;
}

bool es_par (int numero)
{
    if (numero % 2 == 0)
    {
       return true;
    }
    else
    {
       return false;
    }

}