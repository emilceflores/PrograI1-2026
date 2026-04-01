// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/03/2026

/*1. Crea una función llamada “IntercambiarValores” que reciba dos parámetros por
referencia y los intercambie entre sí. Imprime los valores antes y después de la llamada a
la función.*/

#include <iostream>

using namespace std;

void IntercambiarValores (int &valor_1 , int &valor_2 );//Declaración de la función

int main()
{
    int num_1;
    int num_2;

    cout << "Ingrese el primer valor: ";
    cin >> num_1;
    cout << "Ingrese el segundo valor: ";
    cin >> num_2;

    cout << " Antes del intercambio:" << endl; // Mostrar antes
    cout << "valor 1 = " << num_1 << ", valor 2 = " << num_2 << endl;
    
    IntercambiarValores(num_1, num_2);

    cout << " Despues del intercambio:" << endl; // Mostrar después
    cout << "valor 1 = " << num_1 << ", valor 2 = " << num_2 << endl;
    return 0;
}
 void IntercambiarValores (int &valor_1 , int &valor_2 ) 
 {
    int temporal;
    temporal = valor_1 ;
    valor_1 = valor_2;
    valor_2 = temporal;
 }