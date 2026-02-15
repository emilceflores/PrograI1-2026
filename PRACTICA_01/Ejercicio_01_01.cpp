// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital..
// Fecha creación: 11/02/2026


#include <iostream>

using namespace std;

int main()
{
    int numero1;
    int numero2;
    int suma =0;
    int resta =0;
    int multiplicar =0;
    int division =0;

    system ("cls");
    cout << "ingrese primer valor: ";
    cin >> numero1;
    cout << "ingrese segundo valor: ";
    cin >> numero2;
    
    cout << "la suma es: " << numero1 + numero2 << endl ;
    cout << "la resta es: " << numero1 - numero2 << endl ;
    cout << "la multiplicacion es: " << numero1 * numero2 << endl ;
    cout << "la division es: " << numero1 / numero2 << endl ;
 
 return 0 ;
}