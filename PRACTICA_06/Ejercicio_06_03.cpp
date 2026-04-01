// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/03/2026

/*3. Crea una función llamada “ModificarValores” que reciba dos parámetros: un entero
por valor y un entero por referencia. La función debe multiplicar el valor por 2 (para el
valor pasado por valor) y cambiar el valor por referencia (sumando 10).*/

#include <iostream>

using namespace std;
void ModificarValores(int valor_1, int &valor_2);

int main()
{
    int num_1;
    int num_2;

    cout << "Ingrese el primer valor : ";
    cin >> num_1;
    cout << "Ingrese el segundo valor : ";
    cin >> num_2;

    cout << " Antes:" << endl;
    cout << "valor 1 = " << num_1 << ", valor 2 = " << num_2 << endl;

    ModificarValores(num_1, num_2);

    cout << " Despues:" << endl;
    cout << "valor 1 = " << num_1 << ", valor 2 = " << num_2 << endl;

    


    return 0;
}

void ModificarValores(int valor_1, int &valor_2)// &valor_2 por referencia
{
    valor_1 = valor_1 * 2;       
    valor_2 = valor_2 + 10; 
}