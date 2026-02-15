// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026


#include <iostream>

using namespace std;

int main()
{
    int edad ;

    cout << "ingresar edad: " ;
    cin >> edad;

    if (edad >= 18 && edad <= 25)
    {
       cout << "edad esta en el rango [18-25]" << endl ;
    }
    else
    {
        cout << "edad no esta en el rango [18-25]" << endl ;
    }
    
    
 return 0 ;
}