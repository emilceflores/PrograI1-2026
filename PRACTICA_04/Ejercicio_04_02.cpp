// Materia: Programación I, Paralelo 4
// Autor:Emilce Jael Flores Gutierrez.
// Carnet:9226768.
// Fecha creación: 04/03/2026

/*Determinación de Mayoría: Cree una función que reciba tres números enteros y
devuelva el mayor de ellos. El programa principal debe capturar los tres valores y
mostrar el resultado.*/

#include <iostream>

using namespace std;

int numero_1; 
int numero_2; 
int numero_3; 
int numMayor;
int Mayor;
int Determinacion_Mayores(int numero_1, int numero_2,int numero_3);

int main()
{
   cout<< "ingresar primer valor: ";
   cin >> numero_1;
   cout<< "ingresar segundo valor: ";
   cin >> numero_2;
   cout<< "ingresar tercer valor: ";
   cin >> numero_3;

   Mayor =Determinacion_Mayores(numero_1,numero_2,numero_3);

   cout<< "el numero mayor es: "<< Mayor <<endl;

    return 0;
}

int Determinacion_Mayores(int numero_1, int numero_2,int numero_3)
{
    if (numero_1 > numero_2 && numero_1 > numero_3 )
    {
        numMayor = numero_1;
    }
    if (numero_2 > numero_1 && numero_2 > numero_3)
    {
        numMayor = numero_2;
    }
    else
    {
        numMayor = numero_3;
    }

   return numMayor;
}