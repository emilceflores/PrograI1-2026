// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026

/*Escriba un programa que lea de la entrada estándar los dos catetos de un
triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double cateto1 ;
    double cateto2 ;
    double resultdo = 0 ; 
    double hipotenusa = 0;

    system ("cls");
    cout << "ingrese cateto opuesto: ";
    cin >> cateto1;
    cout << "ingrese cateto adyacente: ";
    cin >> cateto2;
    
    resultdo = (cateto1 * cateto1) + (cateto2 * cateto2);
    hipotenusa = sqrt(resultdo);

    cout << "Hipotenusa: " << hipotenusa << endl;

    return 0;
   
}