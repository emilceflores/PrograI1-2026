// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: diseño digital.
// Fecha creación: 06/03/2026


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int producto;
float precio =0;
float total =0;
float total_ventas=0;
float iva;
float totalIVA =0;
float descuento_aplicado =0;
float precio_producto ();
float calcular_iva (float precio);
float descuento (float total);

int main ()
{
    srand(time(NULL));
    cout<<"ingresar numero de productos vendidos: ";
    cin>> producto;

    for (int i = 1; i <= producto; i++)
    {
        precio = precio_producto ();
        iva = calcular_iva (precio) ;

        totalIVA += iva;
        total_ventas = total_ventas + precio + iva;
    }
    cout<<"total sin descuento: "<< total_ventas << endl;
    total_ventas = descuento (total_ventas);

    cout<<"total con descuento: "<< descuento_aplicado << endl;
    cout<<"total de ventas: "<< total_ventas << endl;
    cout<<"IVA que debe pagar es: "<< totalIVA << endl;
 


    return 0;
}

float precio_producto (float aleatorio) //se genera los precios aleatorios de los productos
{
    aleatorio = 20 + rand() % 31;
    return aleatorio;
}
float calcular_iva (float precio) //calcula el iva 13%
{
    return precio * 0.13;
}
float descuento (float total)
{
    if (total>= 2500)
    {
       descuento_aplicado = total * 0.05;
       total = total - descuento_aplicado;
    }
    else
    {
        descuento_aplicado = 0;
    }
    
    return total;
}