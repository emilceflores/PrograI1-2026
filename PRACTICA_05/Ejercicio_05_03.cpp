// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: diseño digital.
// Fecha creación: 06/03/2026

/*Realizar un programa que reciba las horas trabajadas de un trabajador, la tarifa por
hora y una bonificación si trabaja mas de 8 horas , solamente a las horas extra.
Debe dar como resultado.
a. Salario del trabajador
b. Salario bonificación si es que tuviera.*/

#include <iostream>
using namespace std;

int horas;
int tarifa;
float salario=0;
float bonificacion =0;
int calcular_salrio (int horas , int tarifa);
int calcular_bonificacion (int horas , int tarifa);
int main ()
{
    cout<< "ingresar horas trabajadas: ";
    cin>> horas;
    cout<< "ingresar tarifa por hora: ";
    cin>> tarifa;

    salario = calcular_salrio (horas , tarifa);
    bonificacion= calcular_bonificacion (horas , tarifa);
    
    cout<< "salario es: "<< salario <<endl;
    cout<< "Bonificacion es: "<< bonificacion <<endl;

    return 0;
}
int calcular_salrio (int horas , int tarifa)
{
    if (horas <=8)
    {
        salario =horas * tarifa;
    }
    else
    {
        salario = 8 * tarifa;
    }
    
    return salario;
}
int calcular_bonificacion (int horas , int tarifa)
{
    if (horas >8)
    {
        bonificacion =(horas - 8) * tarifa * 0.5;
    }
    return bonificacion;
}