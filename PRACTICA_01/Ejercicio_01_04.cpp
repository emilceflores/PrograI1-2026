// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026

#include <iostream>

using namespace std;

int main()
{
    int practicas;     //la notade prácticas 
    int teorica;       //la nota teórica
    int participacion; //la nota de participación
    int notaFinal;

    system ("cls");
    cout << "ingresar primera nota: ";
    cin >> practicas;
    cout << "ingresar segunda nota: ";
    cin >> teorica ;
    cout << "ingresar tercera nota: ";
    cin >> participacion;

    notaFinal = (practicas * 0.30) + (teorica * 0.60) + (participacion * 0.10);

    cout << "la nota final es: " << notaFinal << endl ;


 return 0 ;
}