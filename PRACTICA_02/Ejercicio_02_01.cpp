// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital..
// Fecha creación: 23/02/2026

#include <iostream>

using namespace std;

int main ()
{
    int numero ;

    system("cls");
    cout<< "ingrese un numero: ";
    cin >> numero;

    if (numero > 0 && numero <=10)
    {
        
        for (int i = 1 ; i <=10 ; i++)
        {
            cout << numero << " * " << i << " = "<< numero * i << endl;
        
        }
        
    }
    else
    {
       cout << "ingrese un numero del (1-10)"<< endl;
    }
    
    return 0;
}