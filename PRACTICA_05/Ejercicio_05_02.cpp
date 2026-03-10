// Materia: Programación I, Paralelo 4
// Autor: Emilce Jael Flores Gutierrez
// Carnet: 9226768.
// Carrera del estudiante: diseño digital.
// Fecha creación: 06/03/2026

/*Un negocio de 'Cosméticos' de belleza contratará a n vendedoras para la venta de
sus productos. Cada vendedora en promedio debe vender 10 productos en un
mes. La cancelación de los sueldos a las vendedoras se realiza cada fin de mes
bajo las siguientes características: - Una vendedora recibe un sueldo básico de
acuerdo a su antigüedad y además se añade un sueldo extra por comisión de
ventas del 10% del total vendido. - La propietaria del negocio desea conocer
cuánto de sueldo debe cancelar a cada una de sus vendedoras y cuánto de
comisión recibirá como extra.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int vendedoras;
int antiguedad;
float sueldo = 3300;
float precio;
float total_ventas = 0;
float comision;
float sueldo_total;

float precio_producto(float precioal);
float calcular_comision(float total);
int generar_antiguedad(int antiguedadal);

int main()
{
    srand(time(NULL));

    cout<<"Ingresar numero de vendedoras: ";
    cin>>vendedoras;

    for(int i = 1; i <= vendedoras; i++)
    {
        total_ventas = 0;

        cout<<"Vendedora "<<i<<endl;

        antiguedad = generar_antiguedad(antiguedad);

        for(int j = 1; j <= 10; j++)
        {
            precio = precio_producto(precio);
            total_ventas = total_ventas + precio;
        }

        comision = calcular_comision(total_ventas);

        sueldo_total = sueldo + comision;

        cout<<"Total de ventas: "<<total_ventas<<endl;
        cout<<"Comision es: "<<comision<<endl;
        cout<<"Sueldo total a pagar: "<<sueldo_total<<endl;
    }

    return 0;
}

float precio_producto(float precioal)
{
    precioal =20 + rand()%81;
    return precioal;

}

float calcular_comision(float total)
{
    total *= 0.10; 
    return total;

}
   
int generar_antiguedad(int antiguedadal)
{
    antiguedadal= 1 + rand()%100;
    return antiguedadal;
}