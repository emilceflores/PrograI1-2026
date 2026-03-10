// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Conversión de Divisas: Escriba una función que convierta un monto dado en
bolivianos a dólares, recibiendo como parámetros la cantidad y el tipo de cambio
oficial y paralelo.*/

#include <iostream>
using namespace std;

float monto;
float cambiof;
float cambiop;
float Cambio_oficial (float monto);
float Cambio_paralelo (float monto);

int main()
{
    cout<< "Ingresar monto en Boliviano: ";
    cin>>monto;
    cambiof = Cambio_oficial (monto); 
    cambiop = Cambio_paralelo (monto);
    cout << monto << "Bs a dolar es: "<< cambiof << "(cambio oficial)"<< endl; 
    cout<< monto << "Bs a dolar es: " << cambiop << "(cambio paralelo)"<< endl;

    return 0;
}

float Cambio_oficial (float monto)
{
    float oficial;
    oficial = (monto / 6.96);
    return oficial;
}

float Cambio_paralelo (float monto)
{
  float paralelo;
  paralelo = (monto / 9.07);
  return paralelo;  

}
