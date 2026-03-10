// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Contador de Dígitos: Desarrolle una función que reciba un número entero positivo
y devuelva la cantidad de dígitos que lo componen (utilizando divisiones
sucesivas entre 10).*/

#include <iostream>
using namespace std;

int numero;
int contador=0;
int contador_digitos(int numero);

int main()
{
    cout<<"ingrese un numero: ";
    cin >> numero;

    cout << "El numero tiene "<< contador_digitos(numero)<< " digitos. "<<endl;
    return 0;
}
int contador_digitos(int numero)
{
while (numero>0)
{
    numero = numero /10;
    contador++;
}
   return contador;
}