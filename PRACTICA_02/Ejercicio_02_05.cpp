// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital..
// Fecha creación: 23/02/2026

/*Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese
mismo rango [1-100], e indicarle al usuario si el número que digito es menor
o mayor al número aleatorio, así hasta que lo adivine. Y por ultimo
mostrarle el número de intentos que le llevo*/

#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std;

int numero;
int numaleatorio;
int intentos = 0;

int main ()
{
    srand(time(NULL));
    numaleatorio = rand()% 100 +1 ;
    cout << "Piensa un numero entre 1 y 100." << endl;

 do
    {
        cout << "Ingresa un numero: ";
        cin >> numero;

        intentos++;

        if (numero > numaleatorio)
        {
            cout << "El numero es MENOR." << endl;
        }
        else if (numero < numaleatorio)
        {
            cout << "El numero es MAYOR." << endl;
        }
        else
        {
            cout << "Adivinaste el numero." << endl;
        }

    } while (numero!= numaleatorio);

    cout << "Intentos: " << intentos  << endl;


    return 0;
}