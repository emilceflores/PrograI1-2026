// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Fecha creación: 27/02/2026


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numero;
int numaleatorio;
int suma = 0;
int MayorValor = 0;
int MenorValor = 1001;

int main()
{
    srand(time(NULL));
    cout<<"ingresar la cantidad de numeros: ";
    cin>> numero;

    for (int i = 0; i < numero; i++)
    {
        numaleatorio = rand()% 1000 +1;
        cout << "Numero aleatorio es: " << numaleatorio << endl;

        suma +=numaleatorio;

        if(numaleatorio > MayorValor)
        {
            MayorValor = numaleatorio;
        }
        if(numaleatorio < MenorValor){
            MenorValor = numaleatorio;
        }
    }
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << suma / numero << endl; 
    cout << "El numero mayor es: " << MayorValor << endl;
    cout << "El numero menor es: " << MenorValor << endl;
    
    return 0;
}