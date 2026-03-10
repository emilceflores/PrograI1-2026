// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Cálculo de Área Geométrica: Desarrolle una función que reciba la base y la altura
de un triángulo y devuelva su área (Area= (base x altura) / 2).*/

#include <iostream>

using namespace std;

float Calcular_area (float base, float altura);
float base =0;
float altura =0;
float area =0;
float resultado =0;

int main()
{
    cout<< "Ingrese la base: ";
    cin>> base;
    cout<< "Ingrese la altura: ";
    cin>> altura;

    resultado = Calcular_area (base, altura);
    cout<< "El area es: "<< resultado << endl; 
    return 0;
}

float Calcular_area (float base, float altura)
{

    area = (base * altura) / 2;

    return area;
}