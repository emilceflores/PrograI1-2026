// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Promedio de Calificaciones: Implemente una función que reciba dos notas reales
y devuelva el promedio aritmético de ambas.*/

#include <iostream>
using namespace std;

float nota1;
float nota2;
float promedio =0;
float notafinal =0;
float Promedio_notas(float nota1 , float nota2);

int main()
{
    cout<<"ingresar primera nota: ";
    cin>>nota1;
    cout<<"ingresar segunda nota: ";
    cin>>nota2;

    notafinal = Promedio_notas(nota1 , nota2);
    cout<< "El promedio aritmedtico es: "<< notafinal<< endl;



    return 0;
}
float Promedio_notas(float nota1 , float nota2)
{
    promedio = (nota1 + nota2)/2;

    return promedio;

}