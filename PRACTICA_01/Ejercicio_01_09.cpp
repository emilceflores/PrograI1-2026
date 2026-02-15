// Materia: Programación I, Paralelo 4
// Autor: Emilce Flores
// Carnet: 9226768.
// Carrera del estudiante: Diseño Digital.
// Fecha creación: 11/02/2026

/*Cambiar un número entero con el 
mismo valor pero en romanos.*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;

    system("cls");
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; // numeros enteros con sus símbolos romanos
    string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    cout << "Numero en romano: "<< endl ;

    for (int i = 0; i < 13; i++) //for recorre las posiciones "valores"
    {
        while (numero >= valores[i])
        {
            cout << romanos[i];
            numero = numero - valores[i];
        }

        
    }

    
 return 0 ;
}