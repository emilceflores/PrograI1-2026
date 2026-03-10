// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Volumen de un Cilindro: Implemente una función que reciba el radio y la altura de
un cilindro y retorne su volumen (V=π * r * r * h). Utilice una constante para el valor
de π.*/


#include <iostream>
using namespace std;

float Calcular_volumen (float radio, float altura);
float radio =0;
float altura =0;
float volumen =0;
float resultado =0;

int main()
{

    cout<< "Ingrese la radio: ";
    cin>> radio;
    cout<< "Ingrese la altura: ";
    cin>> altura;

    resultado = Calcular_volumen (radio, altura);
    cout<< "El volumen es: "<< resultado << endl; 
    return 0;
}
float Calcular_volumen (float radio, float altura)
{
    float pi = 3.14;
    volumen = pi * radio * radio * altura ;

    return volumen;
}