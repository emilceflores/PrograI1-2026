// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/03/2026

/*2. Crea una función llamada “CalcularVolumen” que reciba un parámetro radio y un
parámetro altura. El parámetro altura debe tener un valor por defecto de 10. Calcula y
devuelve el volumen de un cilindro (usando la fórmula: V=π×r2×hV)*/

#include <iostream>

using namespace std;

float CalcularVolumen(float radio, float altura = 10);

int main()
{
    float Radio;
    float volumen; 

    cout << "Ingrese la radio: ";
    cin >> Radio;

    volumen = CalcularVolumen(Radio);

    cout << "El volumen del cilindro es: " << volumen << endl;


    return 0;
}

float CalcularVolumen(float radio, float altura)
{
    float volumen;
    float pi = 3.1416;

    volumen = pi * radio * radio * altura;

    return volumen;
}