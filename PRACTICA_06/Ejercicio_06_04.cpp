// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768
// Carrera del estudiante: Diseño Digital
// Fecha creación: 27/03/2026

/*4. Cree una función CalcularPrecioTotal que reciba el precio base de un producto y un
porcentaje de impuesto. Defina el impuesto con un valor predeterminado del 13%
(correspondiente al IVA boliviano). Si el usuario solo envía el precio, la función debe
aplicar automáticamente el 13%.*/

#include <iostream>

using namespace std;


float CalcularPrecioTotal(float precio, float impuesto = 13);//impuesto con valor por defecto

int main()
{
    float precio;
    float total;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Antes: precio = " << precio << endl;

    
    total = CalcularPrecioTotal(precio); // Solo enviamos el precio aqui se usa automáticamente el 13%

    cout << "Despues: precio total = " << total << endl;

    return 0;
}

float CalcularPrecioTotal(float precio, float impuesto)
{
    float total;

    total = precio + (precio * impuesto / 100);

    return total;
}