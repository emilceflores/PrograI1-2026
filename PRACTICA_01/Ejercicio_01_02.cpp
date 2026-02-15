// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026

/*Escribir un programa que de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA
(IVA=13%).*/

#include <iostream>

using namespace std;

int main()
{
    int precio;
    int iva = 13;
    double porcentaje; // guardo el porcentaje del numero ingresado
    double precioTotal;

    system("cls");
    cout << "Ingresar precio del producto: ";
    cin >> precio;

    porcentaje = (precio * iva) / 100; // saca el porcentaje el numero ingresado
    precioTotal = porcentaje + precio ;


    cout<< "Precio del producto mas IVA es: " << precioTotal << endl;



 return 0 ;
}